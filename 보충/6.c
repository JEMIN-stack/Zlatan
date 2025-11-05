#include <stdio.h>

void average( int*p );

int main(void){

    int score[5];
    int *p = score;

    average(score);


    return 0;
}

void average( int*p ){
    int sum = 0;

    for (int i=0; i<5; i++){
        scanf("%d", (p+i));
        sum += *(p+i);
    }

    int avg = sum / 5;
    printf("평균점수: %d\n", avg);
}
