#include <stdio.h>
#include <string.h>

#define MAX_LINES 10000
#define MAX_ADDR_LEN 200

int main(void)
{
    FILE *fp;
    char line[1000];
    char addresses[MAX_LINES][MAX_ADDR_LEN];
    int counts[MAX_LINES] = {0};
    int addr_count = 0;

    fp = fopen("fast_log.txt", "r");
    if (fp == NULL) {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }

    // 1️⃣ 한 줄씩 읽기
    while (fgets(line, sizeof(line), fp) != NULL) {

        // {IPv6-ICMP} 또는 {ICMP} 포함 여부 확인
        if (strstr(line, "{IPv6-ICMP}") || strstr(line, "{ICMP}")) {

            // 2️⃣ '}' 뒤 공백 다음부터 시작
            char *start = strchr(line, '}');
            if (start == NULL) continue;
            start += 2; // "} " 다음 위치로 이동

            // 3️⃣ " ->" 전까지가 송신지 주소
            char *end = strstr(start, " ->");
            if (end == NULL) continue;
            *end = '\0'; // 주소 문자열 끝내기

            // 4️⃣ 이미 저장된 주소인지 확인
            int found = 0;
            for (int i = 0; i < addr_count; i++) {
                if (strcmp(addresses[i], start) == 0) {
                    counts[i]++;
                    found = 1;
                    break;
                }
            }

            // 5️⃣ 새 주소라면 추가
            if (!found && addr_count < MAX_LINES) {
                strcpy(addresses[addr_count], start);
                counts[addr_count] = 1;
                addr_count++;
            }
        }
    }

    fclose(fp);

    // 6️⃣ 가장 많이 등장한 주소 찾기
    int max_idx = 0;
    for (int i = 1; i < addr_count; i++) {
        if (counts[i] > counts[max_idx]) {
            max_idx = i;
        }
    }

    // 7️⃣ IPv4 / IPv6 구분 (문자열에 ':' 또는 '.' 포함 여부)
    char *type;
    if (strchr(addresses[max_idx], ':'))
        type = "IPv6";
    else if (strchr(addresses[max_idx], '.'))
        type = "IPv4";
    else
        type = "Unknown";

    // 8️⃣ 출력
    printf("가장 많이 등장한 주소: %s\n", addresses[max_idx]);
    printf("등장 횟수: %d회\n", counts[max_idx]);
    printf("주소 유형: %s\n", type);

    return 0;
}
