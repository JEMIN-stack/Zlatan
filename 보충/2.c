#include <stdio.h>

int main(void){

    int *a;
    int *b;
    int *c;
    int x,y,z;
    int max, min;

    a = &x;
    b = &y;
    c = &z;

    scanf("%d %d %d", &x, &y, &z);

    max = *a;
    if (max < *b){
        max = *b;
    }

    else if (max < *c){
        max = *c;
    }

    min = *a;
    if (min > *b){
        min = *b;
    }

    else if (min > *c){
        min = *c;
    }

    printf("max: %d , min: %d", max,  min);

    return 0;
}