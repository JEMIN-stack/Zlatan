#include <stdio.h>

int main(void)
{
    double I_load, vel, V, C, eta, R;

    printf("----------------사전 선정 정보-----------------\n");
    printf("평균 전류 I_load [A] (부하측) : \n");  if (scanf("%lf",&I_load)!=1) return 1;
    printf("평균속도 vel[km/h]\n");               if (scanf("%lf",&vel)!=1) return 1;
    printf("예비율 R [20%% - 0.2]:\n");           if (scanf("%lf",&R)!=1) return 1;
     
    printf("----------------배터리 정보-----------------\n");
    printf("공칭전압 V[V]: \n");                   if (scanf("%lf",&V)!=1) return 1;
    printf("용량 C [Ah]\n");                      if (scanf("%lf",&C)!=1) return 1;
    printf("시스템 효율 eta [90%% = 0.9]:\n");     if (scanf("%lf",&eta)!=1) return 1;
    
    // 입력범위 검증
    if (V<=0 || C<=0 || I_load<=0 || vel<=0 || R<0 || R>=1 || eta<=0 || eta>1) {
        printf("입력값 범위를 확인하세요\n");
        return 1;
    }
    

    const double E_usable = V * C * eta *(1-R); // 사용가능 에너지(Wh)
    const double P = V * I_load / eta;            // 소비전력(W)
    //런타임(h)
    const double t_h = E_usable / P;              
    const double t_min = t_h * 60.0;
    
    // 주행거리(km)
    const double d_km = vel * t_h;               
    // R=0.1 ~ 0.2 , eta = 0.8 ~ 0.95

    // 출력결과
    printf("사용 가능 에너지 E_usable: %.2lf Wh\n", E_usable);
    printf("런타임 t: \t %.2lf h (%.1lf min)\n", t_h, t_min);
    printf("주행거리 d: \t %.2lf km\n",d_km);
    printf("(계산 가정:전압강하/온도영향 무시, 평균전류 일정, 전류는 부하측 기준)\n");
        
    return 0;
}