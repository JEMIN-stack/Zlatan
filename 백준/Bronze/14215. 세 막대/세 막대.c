#include <stdio.h>

void sides_sort(int *k);

int main(void){
    int tri_sides[3];
    int *p = tri_sides;
    int sum = 0;

    scanf("%d %d %d", (p+0), (p+1), (p+2));
    sides_sort(p);

    if (*(p+0) >= (*(p+1) + *(p+2))){
        *(p+0) = *(p+1) + *(p+2) - 1;
    }
    for (int i = 0; i < 3; i++){
        sum += *(p+i);
    }
    printf("%d\n", sum);
    return 0;
}

void sides_sort(int *k){
    int temp;
    for (int i = 0; i < 2; i++){
        for (int j = i + 1; j < 3; j++){
            if (*(k+i) < *(k+j)){
                temp = *(k+i);
                *(k+i) = *(k+j);
                *(k+j) = temp;
            }
        }
    }
}