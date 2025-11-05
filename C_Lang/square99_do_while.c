#include <stdio.h>

int main(void)
{
    int i = 1 ;
    int j ;
    do 
    {
        i += 1;
        for (j=1; j<10; j++)
        {
            printf("%d * %d = %d\n",i, j, i*j);          
        }
        printf("------------------------\n");
    }while (i<9);
    return 0;
}