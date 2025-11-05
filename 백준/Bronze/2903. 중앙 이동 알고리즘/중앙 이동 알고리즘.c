#include <stdio.h>
#include <math.h>

int main(void)
{
    int N,y,z;
    scanf("%d",&N);
    y = pow(2,N)+1;
    z = pow(y,2);
    printf("%d",z);

    return 0;
}

