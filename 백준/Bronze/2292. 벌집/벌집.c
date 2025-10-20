#include <stdio.h>

int main(void)
{
    int i = 0, sum = 1, N;    
    scanf("%d",&N);
    do
    {
        sum += 6*i;
        i++;
    } while (sum < N);
    
    printf("%d",i);
    return 0;
}

