# include <stdio.h>

int main(void)
{
    int a = 1;
    int c = 7;
    do
    {
        a = a * 2;
        c = c * 2;
    } 
    while (a<10);

    printf("a : %d, c: %d \n", a,c);

    return 0;   
}