#include <stdio.h>

int main(void)
{
    double mass,torque,gear, radius, SF, margin;
    int wheels;
    int i = 0;

    const double g = 9.81; // 중력 가속도
    const double c = 0.018; // 구름 저항 계수 - 일반적인 고무바퀴 & 아스팔트 


    while(i<3)
    {
        i += 1;
        //이동로봇 사양 입력
        printf("총 하중(kg):\n");               if (scanf("%lf",&mass)!=1) return 1;
        printf("구동 바퀴 수:\n");               if (scanf("%d",&wheels)!=1) return 1;
        printf("안전계수:\n");                   if (scanf("%lf",&SF)!=1) return 1;
        printf("설계마진:\n");                   if (scanf("%lf",&margin)!=1) return 1;

        //모터 및 바퀴 사양 입력
        printf("모터 정격 토크(N.m)\n");          if (scanf("%lf",&torque)!=1) return 1;
        printf("감속비: \n");                    if (scanf("%lf",&gear)!=1) return 1;
        printf("바퀴 반지름(m):\n");              if (scanf("%lf",&radius)!=1) return 1;


        // 입력 받은 값으로 견입력 계산
        double W = mass * g;
        double F_min = c * W * SF * margin;
        double F_motor = (torque * gear / radius) * wheels;

        // 출력결과
        printf("필요한 최소 견입력: %.2lf [N]\n", F_min);
        printf("모터가 낼 수 있는 견입력: %.2lf [N]\n", F_motor);
        
        if (F_motor >= F_min){
            printf("판정: 만족(모터 견인력이 충분합니다.)\n");
        } else {
            printf("판정: 불만족(더 큰 모터나 감속비가 필요.)\n");
        }

    }
    return 0;
}