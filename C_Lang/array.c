# include <stdio.h>

int main(void)              
{
    int score[5];
    int i;
    int total = 0;
    

    count = sizeof(score) / sizeof(score[0]);

    for(i=0; i < count; i++)
    {
        scanf("%d", &score[i]);
    }

    for(i=0; i < count; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");

    int score[5] = {1,2,3,4,5};

    for(i=0; i < count; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");

    return 0;
}