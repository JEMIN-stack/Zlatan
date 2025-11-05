#include <stdio.h>

int main(void){

    int i, N;
    int count[10001] = {0};
    int num;

    scanf("%d", &N);
    
    for (i=0; i<N; i++){
        scanf("%d",&num);
        count[num]++;
    }

    for (i=0; i<10001; i++){
        while (count[i]>0){
            printf("%d\n",i);
            count[i]--;
        }
    }
    return 0;
}
