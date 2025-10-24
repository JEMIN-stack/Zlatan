#include <stdio.h>

int main(void)
{

    int a = 10;
    int *p = &a;
    double *pd;

    
    pd = p;

    printf("%d\n", *(int*)pd);

    printf("%p\n",p);
    printf("%p\n",pd);

    return 0;
}