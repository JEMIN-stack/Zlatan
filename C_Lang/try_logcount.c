#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL)); 

    int i, acc=0, stop=0;
    int N = rand() % 500 + 500;
    double speed[N];
    int count = 0;
    int x = 1;
    printf("%d개의 속도 데이터",N);

    speed[0] = rand() % 200 + 0; 
    
    for (i=1; i<N; i++)
    { 
        speed[i] = x * rand() % 10 +(speed[i-1]); 
        count += 1;
        if (count > 10)
        {    
            do
            {
                x = rand() % 3 - 1;
            } while (x == 0);
        if (x==-1){
            count = 0;        
        }
        }
    }
    
    for (i=N-1; i>0; i--)
    {
        int delta = speed[i] - speed[i-1];
        
        if (delta >= 10)    acc++;
        else if (delta <= -10) stop++;
    }

    printf("급가속 횟수:%d , 급제동 횟수:%d\n",acc,stop);
    for (i=0; i<100; i++)
    {
        printf("%d번째 %lf\n", i+1, speed[i]);    

    }
    return 0;
}