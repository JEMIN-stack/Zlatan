# include <stdio.h>
# define MAX_N 16

// ----함수 선언부 ----
void classify_by_threshold(const int value[],int label[], int N, int threshold);
int count_black(const int label[],int N);
double average_index_black(const int label[], int N, int black_count);

int main(void){

    int i, N, threshold;
    
    // 센서 갯수 입력
    printf("센서 갯수 입력: ");
    scanf("%d", &N);

    int value[MAX_N];
    int label[MAX_N];

    // 센서로부터 입력되는 값
    printf("센서값 입력: ");
    for (i=0; i<N; i++)
        scanf("%d", &value[i]);

    // 임계값 입력
    printf("임계값 입력: ");
    scanf("%d", &threshold);



    //라인 판별 처리
    classify_by_threshold(value, label, N, threshold);
    printf("\nlabel =");
    for (i=0; i<N; i++){
        printf("\t%d", label[i]);
    }
     
    // 검정 감지 개수
    int black_count = count_black(label,N);
    printf("\n");
    printf("black_count = %d\n", black_count); 

    
    // 라인 중심 위치 계산
    double center = average_index_black(label,N,black_count);

    if (black_count == 0){
        printf("라인 없음\n");  
    }
    else if (black_count != 0){
        printf("index_avg = %.2f\n", center); 
    }

    return 0;
}


 //// 함수 정의

 /// 임계값 분류 함수
 void classify_by_threshold(const int value[],int label[], int N, int threshold){
    int i;
    for (i=0; i<N; i++){
        if (value[i] < threshold){
            label[i] = 1;
        }
        else if (value[i] > threshold){
            label[i] = 0;
        }
    }
}   

/// 검정색 카운트 함수
int count_black(const int label[],int N){
    int i, black_count=0;
    for (i=0; i<N; i++){
        black_count += label[i];
    }
    return black_count;
}

/// 라인 중심 계산 함수
double average_index_black(const int label[], int N, int black_count){
    int sum_index = 0;
    int i, index_avg;

    for (i=0; i<N; i++){
        sum_index += (i*label[i]);
    }
    index_avg = sum_index / black_count;
    return index_avg;
}