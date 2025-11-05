#include <stdio.h>

int main(void)
{
    int count = 0;

    for(;;)
    {
        printf("Be happy!\n");
        count++;
        if (count == 10) break;
        if (count % 3 == 0) continue;
        printf("good");
    }
    return 0;
}