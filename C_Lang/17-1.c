#include <stdio.h>

struct student
{
    int num;
    double grade;
};

int main(void){
    struct student s1;

    s1.num = 2019;
    s1.grade = 3.2;
    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1lf\n", s1.grade);

    return 0;
}
