#include <stdio.h>
#define MAX_N 1100

int main(void){
    int i,j,N,k,temp, cutline;
    int score[MAX_N];

    scanf("%d %d", &N, &k);

    for (i=0; i<N; i++){
        scanf("%d", &score[i]);
    }
    
    for (i=0; i < N-1; i++){
        for(j=i+1; j<N; j++){
            if (score[i] < score[j]){
                temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }  
    }
    cutline = score[k-1];
    printf("%d",cutline);
    return 0;
}