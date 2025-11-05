#include <stdio.h>
#include <math.h>

// ===================== 구조체 정의 =====================
typedef struct {
    // --- 견인력 계산용 ---
    double tr_mass;        // 총 하중(kg)
    int    tr_wheels;      // 구동 바퀴 수
    double tr_SF;          // 안전계수
    double tr_margin;      // 설계마진
    double tr_torque;      // 모터 정격토크(N·m)
    double tr_gear;        // 감속비
    double tr_radius;      // 바퀴 반지름(m)

    // --- 배터리 계산용 ---
    double bt_V;           // 전압(V)
    double bt_C;           // 용량(Ah)
    double bt_Iload;       // 부하 전류(A)
    double bt_eta;         // 시스템 효율
    double bt_R;           // 예비율
    double bt_vel;         // 평균속도(km/h)

    // --- 등판각 계산용 ---
    double gr_mass;        // 총 질량(kg)
    double gr_Tm;          // 모터 정격토크(N·m)
    int    gr_Nm;          // 모터 수
    double gr_G;           // 감속비
    double gr_eta;         // 구동 효율
    double gr_radius;      // 바퀴 반지름(m)
    double gr_c;           // 구름계수
    double gr_SF;          // 안전계수
    
} RobotSpec;

// ===================== 함수 선언 =====================
void calc_traction(RobotSpec *r);
void calc_battery(RobotSpec *r);
void calc_gradeability(RobotSpec *r);

// ===================== 메인 함수 =====================
int main(void)
{
    RobotSpec robot;
    int menu;

    while (1) {
        printf("\n=== 이동로봇 종합 계산 프로그램 ===\n");
        printf("1. 견인력 계산\n");
        printf("2. 배터리 계산\n");
        printf("3. 등판각 계산\n");
        printf("4. 종료\n");
        printf("메뉴 선택: ");
        if (scanf("%d", &menu) != 1) return 1;

        switch (menu) {
            case 1:
                calc_traction(&robot);
                break;
            case 2:
                calc_battery(&robot);
                break;
            case 3:
                calc_gradeability(&robot);
                break;
            case 4:
                printf("프로그램을 종료합니다.\n");
                return 0;
            default:
                printf("잘못된 선택입니다. 다시 입력하세요.\n");
                break;
        }
    }
    return 0;
}

// ===================== 1. 견인력 계산 함수 =====================
void calc_traction(RobotSpec *r)
{
    const double g = 9.81;
    const double c = 0.018;

    printf("\n--- 견인력 계산 ---\n");
    printf("총 하중(kg): ");         if (scanf("%lf", &r->tr_mass) != 1) return;
    printf("구동 바퀴 수: ");         if (scanf("%d", &r->tr_wheels) != 1) return;
    printf("안전계수: ");             if (scanf("%lf", &r->tr_SF) != 1) return;
    printf("설계마진: ");             if (scanf("%lf", &r->tr_margin) != 1) return;
    printf("모터 정격토크(N·m): ");  if (scanf("%lf", &r->tr_torque) != 1) return;
    printf("감속비: ");              if (scanf("%lf", &r->tr_gear) != 1) return;
    printf("바퀴 반지름(m): ");      if (scanf("%lf", &r->tr_radius) != 1) return;

    double W = r->tr_mass * g;
    double F_min = c * W * r->tr_SF * r->tr_margin;
    double F_motor = (r->tr_torque * r->tr_gear / r->tr_radius) * r->tr_wheels;

    printf("\n필요한 최소 견입력: %.2lf [N]\n", F_min);
    printf("모터가 낼 수 있는 견입력: %.2lf [N]\n", F_motor);

    if (F_motor >= F_min)
        printf("판정: 만족 (모터 견인력이 충분합니다.)\n");
    else
        printf("판정: 불만족 (더 큰 모터 또는 감속비 필요.)\n");
}

// ===================== 2. 배터리 계산 함수 =====================
void calc_battery(RobotSpec *r)
{
    printf("\n--- 배터리 계산 ---\n");
    printf("공칭전압 V [V]: ");       if (scanf("%lf", &r->bt_V) != 1) return;
    printf("용량 C [Ah]: ");          if (scanf("%lf", &r->bt_C) != 1) return;
    printf("부하 전류 I_load [A]: "); if (scanf("%lf", &r->bt_Iload) != 1) return;
    printf("시스템 효율 η [0~1]: ");  if (scanf("%lf", &r->bt_eta) != 1) return;
    printf("예비율 R [0~1]: ");       if (scanf("%lf", &r->bt_R) != 1) return;
    printf("평균속도 vel [km/h]: ");  if (scanf("%lf", &r->bt_vel) != 1) return;

    if (r->bt_V<=0 || r->bt_C<=0 || r->bt_Iload<=0 || 
        r->bt_eta<=0 || r->bt_eta>1 || r->bt_R<0 || r->bt_R>=1) {
        printf("입력값 범위를 확인하세요.\n");
        return;
    }

    double E_usable = r->bt_V * r->bt_C * r->bt_eta * (1 - r->bt_R);  // Wh
    double P = r->bt_V * r->bt_Iload / r->bt_eta;                     // W
    double t_h = E_usable / P;                                        // h
    double t_min = t_h * 60.0;                                        // min
    double d_km = r->bt_vel * t_h;                                    // km

    printf("\n사용 가능 에너지: %.2lf Wh\n", E_usable);
    printf("런타임: %.2lf h (%.1lf min)\n", t_h, t_min);
    printf("예상 주행거리: %.2lf km\n", d_km);
    printf("(가정: 전압강하/온도영향 무시, 평균전류 일정)\n");
}

// ===================== 3. 등판각 계산 함수 =====================
void calc_gradeability(RobotSpec *r)
{
    const double g = 9.81;
    printf("\n--- 등판각 계산 ---\n");
    printf("총 질량(kg): ");          if (scanf("%lf", &r->gr_mass) != 1) return;
    printf("모터 정격토크[N·m]: ");  if (scanf("%lf", &r->gr_Tm) != 1) return;
    printf("모터 수: ");              if (scanf("%d", &r->gr_Nm) != 1) return;
    printf("감속비: ");              if (scanf("%lf", &r->gr_G) != 1) return;
    printf("구동 효율[0~1]: ");       if (scanf("%lf", &r->gr_eta) != 1) return;
    printf("바퀴 반지름[m]: ");       if (scanf("%lf", &r->gr_radius) != 1) return;
    printf("구름계수: ");            if (scanf("%lf", &r->gr_c) != 1) return;
    printf("안전계수: ");            if (scanf("%lf", &r->gr_SF) != 1) return;

    double T_total = r->gr_Nm * r->gr_Tm * r->gr_G * r->gr_eta;
    double F_avail = T_total / r->gr_radius;
    double mg = r->gr_mass * g;

    double sin_theta = (F_avail / r->gr_SF - r->gr_c * mg) / mg;
    if (sin_theta < 0.0) sin_theta = 0.0;
    if (sin_theta > 1.0) sin_theta = 1.0;

    double theta_rad = asin(sin_theta);
    double theta_deg = theta_rad * (180.0 / M_PI);
    double grade = tan(theta_rad) * 100.0;

    printf("\n가용 구동력: %.2lf N\n", F_avail);
    printf("최대 등판각: %.2lf deg\n", theta_deg);
    printf("등판율: %.1lf %%\n", grade);
}
