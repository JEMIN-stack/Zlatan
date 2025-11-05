#include <stdio.h>
#include <math.h>

int main(void)
{
    double m, Tm, G, eta, r, c, SF;
    int i=1, Nm;
    const double g = 9.81; // 중력 가속도
    
    while(i<2)
    {
        i += 1;
        //이동로봇 사양 입력
        printf("총 질량(kg):\n");        if (scanf("%lf",&m)!=1) return 1;
        printf("모터 정격토크[N-m]:\n");  if (scanf("%lf",&Tm)!=1) return 1;
        printf("구동 모터 수:\n");       if (scanf("%d",&Nm)!=1) return 1;
        printf("감속비:\n");            if (scanf("%lf",&G)!=1) return 1;
        printf("구동 효율\n");          if (scanf("%lf",&eta)!=1) return 1;       
        printf("바퀴 반지름r[m]:\n");    if (scanf("%lf",&r)!=1) return 1;
        printf("구름계수: \n");         if (scanf("%lf",&c)!=1) return 1;
        printf("안전계수:\n");          if (scanf("%lf",&SF)!=1) return 1;
        


        // 입력 받은 값으로 계산
        double T_tot = Nm * Tm * G * eta;
        double F_avail = T_tot / r;
        double mg = m * g;

        double sin_theta = (F_avail / SF - c * mg) / mg;
        if (sin_theta < 0.0) sin_theta = 0.0;
        if (sin_theta > 1.0) sin_theta = 1.0;

        double theta_rad = asin(sin_theta);
        double theta_deg = theta_rad * (180.0 / M_PI);
        double grade = tan(theta_rad) * 100.0;


        // 출력결과
        printf("F_avail    : %.2f N\n",   F_avail);
        printf("theta_max  : %.2f deg\n", theta_deg);
        printf("등판율     : %.1f %%\n",  grade);
      
    }
    return 0;
}