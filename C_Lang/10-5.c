#include <stdio.h>

void print_ary(int *pa);

int main(void){

    int ary[100] = {10, 20, 30, 40, 50, 60};

    print_ary(&ary[0]);

    return 0;
}

void print_ary(int *pa){
    int i;

    for (i = 0; i<6; i++){
        printf("%d ",pa[i]);
    }
}

