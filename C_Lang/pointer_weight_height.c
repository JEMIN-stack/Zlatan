#include <stdio.h>

int main(void){
  
    int ary[5][6] = {0};
    int num = 1;

    int ary1[6] = {1,2,3,4,5};    
    int ary2[6] = {6,7,8,9,10};
    int ary3[6] = {11,12,13,14,15};
    int ary4[6] = {16,17,18,19,20};
    int ary5[6] = {0,0,0,0,0,0};
    int *pary[5] = {ary1, ary2, ary3, ary4, ary5};

    int i, j, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;

  
    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            sum1 += pary[i][j];
              
        }
        pary[i][5] = sum1;
        sum3 += sum1;
        sum1 = 0;   
    }

     for (j=0; j<5; j++){
        for (i=0; i<4; i++){
            sum2 += pary[i][j];
              
        }
        pary[4][j] = sum2;
        sum4 += sum2; 
        sum2 = 0;
    }
    
    pary[4][5] = sum4;

    for (i=0; i<5; i++){
        for (j=0; j<6; j++){
            printf("%6d", pary[i][j]);
            
        }
        printf("\n"); 
    }


    return 0;
}

