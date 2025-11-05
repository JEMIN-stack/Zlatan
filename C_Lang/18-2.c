#include <stdio.h>

int main(void)
{
    FILE *fp;
    int ch;

    fp = fopen("a.txt", "r");     // ① a.txt 파일을 읽기 전용으로 개방
    if (fp == NULL)               // ② 파일 개방 실패 시
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;                 // 프로그램 종료
    }

    while (1)                     // ③ 무한 반복
    {
        ch = fgetc(fp);           // ④ 파일에서 한 문자를 읽어옴
        if (ch == EOF)            // ⑤ 파일의 끝(End Of File)이면 반복 종료
        {
            break;
        }
        putchar(ch);              // ⑥ 읽은 문자를 화면에 출력
    }

    fclose(fp);                   // ⑦ 파일 닫기
    return 0;
}
