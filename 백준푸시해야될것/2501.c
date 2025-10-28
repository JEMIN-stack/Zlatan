#include <stdio.h>

int main(void){
    int i,K,N, count = 0;
    scanf("%d %d", &N, &K);

    for (i=1; i<N+1; i++){
        if (N % i == 0){
            count += 1;
        }
            
        if (count == K){
            printf("%d", i);
            break;
        }   
    }
    if (count < K){
        printf("0");
    }    


    return 0;
}