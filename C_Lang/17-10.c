#include <stdio.h>

union student  // 공용체 선언
{
    int num;       // 학번
    double grade;  // 학점
};

int main(void)
{
    union student s1 = { 315 };   // 공용체 변수 s1 생성 및 num에 315 저장

    printf("학번 : %d\n", s1.num);  // num 출력 → 315

    s1.grade = 4.4;                 // grade 값 변경

    printf("학점 : %.1lf\n", s1.grade); // grade 출력 → 4.4
    printf("학번 : %lf\n", s1.num);      // num 다시 출력 → 이상한 값(-1717986918)

    return 0;
}
