#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL)); 

    int i, acc=0, stop=0;
    int N = rand() % 500 +500;
    double speed[N];
       
    printf("%d개의 속도 데이터",N);
    for (i=0; i<600; i++)
    {
        speed[i] = rand() % 200 +0; 
    }
    
    for (i=599; i>0; i--)
    {
        int delta = speed[i] - speed[i-1];
        
        if (delta >= 10)    acc++;
        else if (delta <= -10) stop++;
    }

    printf("급가속 횟수:%d , 급제동 횟수:%d\n",acc,stop);
    return 0;
}