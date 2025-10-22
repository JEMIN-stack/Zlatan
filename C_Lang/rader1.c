#include <stdio.h>

int main(void)
{
    double distance , min;
    int deg = 0, i, j;

    double rader[360];

    for (i=0; i < 10; i++)        //테스트용으로 10개만 
        scanf("%lf", &rader[i]);
    
    for (j=0; j<3; j++)
    {    
        min = 1e8;

        for (i=0; i<10; i++)
        {
            if (rader[i] < min) { 
                min = rader[i];
                deg = i;    
            }
        }
        printf("최소값 3개 중 1개 :%lf, 각도:%d\n", min, deg);
        rader[deg] = 1e8;
    }

    return 0;
}