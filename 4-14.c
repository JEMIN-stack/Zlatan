#include <stdio.h>

int main(void)
{
    int a = 10, b = 5;
    int res;

    res = a / b * 2;             // 1. 산술 연산 우선순위 실험
    printf("res = %d\n", res);

    res = ++a * 3;               // 2. a값 1증가시키고 3을 곱함
    printf("res = %d\n", res);

    res = a++ * 3;               // 3. a값 3을 곱하고 a에 1더해줌
    printf("res,a = %d,%d\n", res,a);

    res = a > b && a != 5;        // 4. a>b 결과와 a!=5의 결과를 && 연산
    printf("res = %d\n", res);

    res = a % 3 == 0;            // 5. 나머지 + 관계 연산
    printf("res = %d\n", res);

    return 0;
}
