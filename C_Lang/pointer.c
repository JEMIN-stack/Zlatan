#include <stdio.h>

int main(void){
    int a = 10;
    int *pa = &a;

    printf("a 주소: %p\n", &a);
    printf("포인터에 a주소 값 배정후 pa 값: %p\n", pa);

    printf("포인터 사용전 a값: %d\n",*pa);
    *pa = 20;
    printf("포인터 사용후 a값: %d\n",*pa);


}