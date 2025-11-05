#include <stdio.h>

int main(void){
    int i;
    int a[5] = {0};
    int *p;
    
    int sum_even = 0;
    int sum_odd = 0;

    p = a;

    scanf("%d %d %d %d %d", &p[0],&p[1],&p[2],&p[3],&p[4]);

    printf("%d \n", p[3]);

    for (i=0; i<5; i++){
        if (p[i] % 2 == 0){
            sum_even += p[i];
        }
        else {
            sum_odd += p[i];
        }
    }

    printf("짝수합: %d, 홀수합: %d\n", sum_even, sum_odd);


    return 0;
}