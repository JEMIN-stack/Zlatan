#include<stdio.h>
int main(void){
    int i,j,k,N,M;
    scanf("%d %d", &N, &M);
    int arr[N];
    int z = (N-2)*(N-1)*(N);
    int sum;
    int count = 0;

    for (i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    int min = 300000;
    for (i=0; i<N-2; i++){
        for (j=i+1; j<N-1; j++){
            for (k=j+1; k<N; k++){
                
                int sum = arr[i] + arr[j] + arr[k];
                if ((M-sum >= 0) && (M-sum < min)){
                    min = M - sum;
                }
                count += 1;   
            }
        }
    }
    int min_sum = M - min;
    printf("%d", min_sum);

    return 0;
}