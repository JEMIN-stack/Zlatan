#include <stdio.h>

int main(void){
    int score[5] = {10, 20, 30, 40, 50};
    int total = 0;

    int *p = score;

    for (int i = 0; i < 5; i++){
        total += *(p+i);
    }

    printf("총합: %d\n", total);
    return 0;
}