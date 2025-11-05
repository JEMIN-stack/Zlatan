#include <stdio.h>
int main(void){
    int i,j,N;
    int N_array[100];
    int count = 0;
    int count_final = 0;

    scanf("%d", &N);

    
    for (i=0; i<N; i++){
        scanf("%d", &N_array[i]);
    }
    
    for (i=0; i<N; i++){
        if (N_array[i] == 1)
            continue;
        for (j=2; j < (N_array[i]/2 + 1); j++){
            if (N_array[i] % j == 0){
                count += 1;
            }
        }
        if (count == 0) {
            count_final += 1;
        }
        count = 0;
    }
    printf("%d\n", count_final);

    return 0;
}