#include <stdio.h>

int main(void){
    int ary[5];

    printf(" ary의 값 : %p\t", ary);
    printf("ary의 주소: %p\n", &ary);
    printf("    ary+1: %p\t", ary+1);
    printf("  &ary+1 : %p\n", &ary+1);

    return 0;
}