#include <stdio.h>
int main(void){
    int i,j,M,N;
    int N_array[10000];
    int count = 0;
    int count_final = 0;
    int sum = 0;
    int idx = 0;

    scanf("%d", &M);
    scanf("%d", &N);

    int min_array[N-M];

    for (i=0; i < N-M+1; i++){
        N_array[i] = M + i;
    }
    
    for (i=0; i< N-M+1 ; i++){
        count = 0;

        if (N_array[i] == 1)
            continue;

        for (j=2; j < (N_array[i]/2 + 1); j++){
            if (N_array[i] % j == 0){
                count += 1;
            }
        }
    
        if (count == 0) {
            count_final += 1;
            sum += N_array[i];
            min_array[idx] = N_array[i];
            idx ++;
        }
    }
 

    if (count_final == 0){
        printf("-1");
    }

    else{
        printf("%d\n", sum);
        printf("%d\n", min_array[0]);
    }
    return 0;
}