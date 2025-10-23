#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    const int *pa = &a;

    printf("변수 a의 값: %d\n", *pa);
    pa = &b;
    printf("변수 b의 값: %d\n", *pa);
    pa = &a;
    a = 10;
    // *pa = 30; , const 사용시 a는 pa를 간접 참고하여 바꿀 수 없다!
    printf("변수 a의 값: %d\n", *pa);

    return 0;
}