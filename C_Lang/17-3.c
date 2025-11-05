# include <stdio.h>

struct  profile
{
    int age;
    double height;
};

struct student
{
    struct  profile pf;
    int id;
    double grade;    
};

int main(void){
    struct student zlatan;

    zlatan.pf.age = 40;
    zlatan.pf.height = 195.5;
    zlatan.id = 138;
    zlatan.grade = 4.5;

    printf("나이: %d\n", zlatan.pf.age);
    printf("나이: %.1lf\n", zlatan.pf.height);
    printf("나이: %d\n", zlatan.id);
    printf("나이: %.1lf\n", zlatan.grade);

    return 0;
}