#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;

    for (i = 1; i<=10; i++)
    {
        if ((i % 3) != 0) 
        {
            continue;
        }
        sum += i;
    }
    
    printf("%d,%d\n",sum,i);
    return 0;
}