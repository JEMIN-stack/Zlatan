#include <stdio.h>

int main(void){
    int i;
    int a[5] = {0};
    int *p[5];
    
    int sum_even = 0;
    int sum_odd = 0;

    for (i=0; i<5; i++)
    {
        scanf("입력: %d", &a[i]);
        p[i] = &a[i];
    }

    
    printf("%d \n", *p[3]);

    for (i=0; i<5; i++){
        if (a[i] % 2 == 0){
            sum_even += a[i];
        }
        else {
            sum_odd += a[i];
        }
    }

    printf("짝수합: %d, 홀수합: %d\n", sum_even, sum_odd);

    return 0;
}