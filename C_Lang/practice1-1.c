#include <stdio.h>

int main(void)
{
    double I_load,vel,V,C,eta , E_usable, P, t, d, R;
     
    printf("----------------사전 선정 정보-----------------\n");
    printf("평균 전류 I_load [A] (부하측) : \n");
    scanf("%lf", &I_load);
    printf("평균속도 vel[km/h]\n");
    scanf("%lf", &vel);
    printf("예비율 R [20%% - 0.2]:\n");
    scanf("%lf", &R);


    printf("----------------배터리 정보-----------------\n");
    printf("공칭전압 V[V]: \n");
    scanf("%lf", &V);
    printf("용량 C [Ah]\n");
    scanf("%lf", &C);
    printf("시스템 효율 eta [90%% = 0.9]:\n");
    scanf("%lf", &eta);
    
    E_usable = V * C * eta *(1-R); // 사용가능 에너지(Wh)
    P = V * I_load / eta;            // 소비전력(W)
    t = E_usable / P;              //런타임(h)
    d = vel * t;               // 주행거리(km)
    // R=0.1 ~ 0.2 , eta = 0.8 ~ 0.95

    printf("[결과]\n");
    printf("사용 가능 에너지 E_usable: %.2lf Wh\n",E_usable);
    printf("런타임 t: \t %.2lf h (%.1lf min)\n", t, t * 60);
    printf("주행거리 d: \t %.2lf km\n",d);
    printf("(계산 가정:전압강하/온도영향 무시, 평균전류 일정, 전류는 부하측 기준)\n");


        
    return 0;
}