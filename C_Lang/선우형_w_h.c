#include <stdio.h>

int main(void)
{
    // 5행 6열 2차원 배열을 선언하고 4행 5열 부분은 1부터 20까지 초기화
    
    int num[5][6] = {0};

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            num[i][j] = i * 5 + j + 1;
        }
    }

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            num[i][5] += num[i][j];
            num[4][j] += num[i][j];
        }
        num[4][5] += num[i][5];
    }

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 6; ++j)
        {
            printf("%3d ", num[i][j]);
        }
        printf("\n");
    }

    // int num0[6] = {0, };
    // int num1[6] = {0, };
    // int num2[6] = {0, };
    // int num3[6] = {0, };
    // int num4[6] = {0, };
    // int *num[5] = {num0, num1, num2, num3, num4};

    // for (int i = 0; i < 4; ++i)
    // {
    //     for (int j = 0; j < 5; ++j)
    //     {
    //         num[i][j] = i * 5 + j + 1;
    //     }
    // }

    // for (int i = 0; i < 4; ++i)
    // {
    //     for (int j = 0; j < 5; ++j)
    //     {
    //         num[i][5] += num[i][j];
    //         num[4][j] += num[i][j];
    //     }
    //     num[4][5] += num[i][5];
    // }

    // for (int i = 0; i < 5; ++i)
    // {
    //     for (int j = 0; j < 6; ++j)
    //     {
    //         printf("%3d ", num[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}