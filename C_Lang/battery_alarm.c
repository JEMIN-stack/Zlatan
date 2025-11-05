#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i, N = 10, warning = 0; // 0: OFF, 1: ON
    double battery[100];
    
    for (i=0; i<N; i++){
        scanf("%lf", &battery[i]);
    }

    printf("\n[배터리 히스테리시스 경보 결과]\n");
    for (i=0; i<N; i++)
    {   
        if ((warning == 0) && (battery[i] <= 30))
        {
            warning = 1;   //경고 on
        }
        else if ((warning == 1) && (battery[i] >= 35))
        {
            warning = 0;   //경고 OFF
        } 
           
        printf("%d단계 / 현재 잔량: %lf / 경고 상태: %s\n",i+1,battery[i], (warning == 1) ? "ON" : "OFF");       
    }
    
    return 0;
}
