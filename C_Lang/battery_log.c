#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    int ch;
    char ch_array[1000000];
    int idx = 0;

    fp = fopen("fast_log.txt", "r");   
    if (fp == NULL)              
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;                 
    }

    while (1)                     //  무한 반복
    {
        ch = fgetc(fp);           //  파일에서 한 문자를 읽어옴
        if (ch == EOF)            //  파일의 끝(End Of File)이면 반복 종료
        {
            break;
        }
        ch_array[idx++] = (char) ch;
                           
    }

    ch_array[idx] = '\0';

    fclose(fp);                   //  파일 닫기
   
    int count_ipv6 = 0;
    int count_icmp = 0;
    char *ptr = ch_array;

    // strstr()은 “검색 대상 문자열 안에서 찾은
    //  부분 문자열의 시작 주소(포인터) 를 반환하는 함수
    while ((ptr = strstr(ptr, "{IPv6-ICMP}")) != NULL){
        count_ipv6 ++;
        ptr ++;
    }

    ptr = ch_array;
    while ((ptr = strstr(ptr, "{ICMP}")) != NULL){
        count_icmp++;
        ptr = ptr + 1;
    }

    printf("IPv6-ICMP 의 갯수: %d\n",count_ipv6);
    printf("ICMP 의 갯수: %d\n", count_icmp);

   
    return 0;
}
