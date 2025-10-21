#include <stdio.h>
#include <time.h>

int main(void)
{
    int a;
    clock_t start, end;
    double cpu_time;

    // -----------------------------
    // 첫 번째 코드 (단순 if-else)
    // -----------------------------
    start = clock();

    for (int i = 0; i < 10000000; i++)   // 1천만 번 반복
    {
        a = i % 6;  // 0~5 반복

        if (a == 1)
            printf("");  // 실제 출력은 생략 (시간 왜곡 방지용)
        else if (a == 2)
            printf("");
        else if (a == 3)
            printf("");
        else if (a == 4)
            printf("");
        else if (a == 5)
            printf("");
        else
            printf("");
    }

    end = clock();
    cpu_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\n단순 if-else 코드 실행 시간: %f초\n", cpu_time);

    // -----------------------------
    // 두 번째 코드 (중첩 if)
    // -----------------------------
    start = clock();

    for (int i = 0; i < 10000000; i++)
    {
        a = i % 6;

        if (a <= 3)
        {
            if (a == 1)
                printf("");
            else if (a == 2)
                printf("");
            else
                printf("");
        }
        else
        {
            if (a == 4)
                printf("");
            else if (a == 5)
                printf("");
            else
                printf("");
        }
    }

    end = clock();
    cpu_time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("중첩 if 코드 실행 시간: %f초\n", cpu_time);

    return 0;
}
