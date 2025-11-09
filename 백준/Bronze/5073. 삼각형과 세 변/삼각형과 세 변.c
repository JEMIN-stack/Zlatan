#include <stdio.h>

void sides_sort(int *k);

int main(void){
    int tri_sides[3] = {0};
    int *p = tri_sides;
    
    while (1)
    {
        scanf("%d %d %d", (p+0), (p+1), (p+2));
        if ((*(p+0) == 0) && (*(p+1) == 0) && (*(p+2) == 0)){
            break;
        }
        sides_sort(p);

        if ((*(p+0) == *(p+1)) && (*(p+1) == *(p+2))){
            printf("Equilateral\n");
        }
        else if (*(p+0) >= (*(p+1) + *(p+2))){
            printf("Invalid\n");
        }
        else if ((*(p+0) != *(p+1)) && (*(p+1) != *(p+2))) {
            printf("Scalene\n");
        }
        else{
            printf("Isosceles\n");
        }
    }  
    
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