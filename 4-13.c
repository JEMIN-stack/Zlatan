#include <stdio.h>

int main(void)
{
    int a = 10;   // 00000000 00000000 00000000 00001010 (2진수)
    int b = 12;   // 00000000 00000000 00000000 00001100 (2진수)

    printf("a & b : %d\n", a & b);   // 비트 AND
    printf("a | b : %d\n", a | b);   // 비트 OR
    printf("a ^ b : %d\n", a ^ b);   // 비트 XOR
    printf("~a : %d\n", ~a);         // 비트 NOT (보수)
    printf("a << 1 : %d\n", a << 1); // 왼쪽 시프트 (x2)
    printf("a >> 2 : %d\n", a >> 2); // 오른쪽 시프트 (/4)

    return 0;
}
