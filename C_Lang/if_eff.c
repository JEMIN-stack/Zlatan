// 중첩 if문으로 효율을 높인 코드
#include <stdio.h>
int main(void)
{
    int a = 3;
    
    if (a <= 3)
    {
        if (a == 1)
        {
            printf("일");
        }
        else if (a == 2)
        {
            printf("이");
        }
        else
        {
            printf("삼");
        }
    }
    else
    {
        if (a == 4)
        {
            printf("사");
        }
        else if (a == 5)
        {
            printf("오");
        }
        else
        {
            printf("육");
        }
    }

    return 0;
}