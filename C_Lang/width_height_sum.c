#include <stdio.h>

int main(void){
  
    int ary1[5][6] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    // int *pary[3] = {ary1, ary2, ary3};
    int i, j, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;

    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            sum1 += ary1[i][j];
              
        }
        ary1[i][5] = sum1;
        sum3 += sum1;
        sum1 = 0;   
    }

     for (j=0; j<5; j++){
        for (i=0; i<4; i++){
            sum2 += ary1[i][j];
              
        }
        ary1[4][j] = sum2;
        sum4 += sum2; 
        sum2 = 0;
    }
    
    ary1[4][5] = sum4;

    if (sum3 == sum4){
        for (i=0; i<5; i++){
            for (j=0; j<6; j++){
                printf("%6d", ary1[i][j]);
                
            }
            printf("\n"); 
        }
    }
    else{
        printf("잘못되스\n");
    }
    return 0;
}

