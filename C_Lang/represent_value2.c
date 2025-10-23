#include <stdio.h>
#define MAX_num 10

int main(void){
    int num[MAX_num];
    int i,j, sum=0, avg, temp, center;

    for(i=0; i<5; i++){
        scanf("%d", &num[i]);
    }

    for(i=0; i<5; i++){
        sum += num[i]; 
    }
    avg = sum / 5;
    
    for(i=0; i<4; i++){
        for(j=i+1; j<5; j++){
            if (num[i] > num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    center = num[2];
    
    printf("%d\n",avg);
    printf("%d\n",center);

    return 0;
}