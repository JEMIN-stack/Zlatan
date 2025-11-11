#include <stdio.h>
int main(void){
    int i,j,N;
    int M = 0;
    scanf("%d", &N);

    for (i=0; i<N; i++){
        int k = i;
        int sum = i;

        while(k>0){
            sum += k % 10;
            k /= 10;
        } 

        if (sum == N){
            M = i;   
            break;
        }
    }
    
    printf("%d",M);

    return 0;
}