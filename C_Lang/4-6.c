#include <stdio.h>

int main(void)
{
    int a = 30;   // 비교에 사용할 변수 a
    int res;      // 결과를 저장할 변수 res

    res = (a > 10) && (a < 20);          // AND 연산: 둘 다 참이면 참
    printf("(a > 10) && (a < 20) : %d\n", res);

    res = (a < 10) || (a > 20);          // OR 연산: 하나라도 참이면 참
    printf("(a < 10) || (a > 20) : %d\n", res);

    res = !(a >= 30);                    // NOT 연산: 참 ↔ 거짓 반전
    printf("!(a >= 30) : %d\n", res);

    return 0;
}