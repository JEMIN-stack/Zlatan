#include <stdio.h>

int main(void) {
    double dist[360]; // 360개 각도 당 거리 저장 
    int indices[10]; // 테스트용 10개 각도를 저장
    int i, j;
    double temp_dist;
    int temp_index;

    printf("360도 라이다 거리값 입력 (테스트용으로 10개만 입력 가능)\n");
    for (i = 0; i < 10; i++) {
        printf("%3d도 거리(cm): ", i);
        scanf("%lf", &dist[i]);  // 테스트용 10개 거리 입력
        indices[i] = i; // 테스트용 10개 인덱스 설정
    }

    // 거리값(dist)과 각도(indices)를 함께 정렬 (버블정렬 또는 선택정렬)
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (dist[i] > dist[j]) {
                // 거리값 교환
                temp_dist = dist[i];
                dist[i] = dist[j];
                dist[j] = temp_dist;
                // 각도도 함께 교환
                temp_index = indices[i];
                indices[i] = indices[j];
                indices[j] = temp_index;
            }
        }
    }

    // 상위 3개 최소값 출력
    printf("\n[라이다 최소 거리 상위 3개 탐색 결과]\n");
    for (i = 0; i < 3; i++) {
        printf("%d위 - 거리: %.2f cm, 각도: %d도\n", i + 1, dist[i], indices[i]);
    }

    return 0;
}