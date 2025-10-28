#include <stdio.h>

int main(void){
    int i, n, sum = 0, count = 0;
    int element[100000];

    while(1){
        scanf("%d", &n);
        if (n == -1){
            break;
        }
        count = 0; 
        sum = 0;

        for (i=1; i< (n/2)+1; i++){
            if (n % i == 0){
                element[count] = i;
                count += 1;
                sum += i;
            }
        }
        if (sum == n){
            printf("%d = %d", n, element[0]);

            for (i=1; i<count; i++){
                printf(" + %d",element[i]);
            }
        }
        else
        {
            printf("%d is NOT perfect.", n);
        }
        printf("\n");

    }
    return 0;
}