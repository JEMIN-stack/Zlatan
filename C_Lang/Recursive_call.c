#include <stdio.h>

// 재귀호출 이용해 1~10의 합

int sum(int num);

int main(void)
{      
    int result = sum(1);
    printf("%d", result);
   
    return 0;
}

int sum(int num)
{
    if (num == 10) 
        return 10;
    else 
        return num + sum(num+1);
}