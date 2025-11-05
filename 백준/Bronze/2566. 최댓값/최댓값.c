#include <stdio.h>

int main(void)
{
    int i,j, max_value, row=0, column=0;
    int numarr_A[9][9];
    
    for (i=0; i<9; i++)
    {   
        for (j=0; j<9; j++)
        {    
            scanf("%d",&numarr_A[i][j]);  
        }
    }

    max_value = numarr_A[0][0];
    for (i=0; i<9; i++)
    {   
        for (j=0; j<9; j++)
        {    
            if (numarr_A[i][j] > max_value){
                max_value = numarr_A[i][j];
                row = i;
                column = j;
            }
        }
    }
    printf("%d\n",max_value);
    printf("%d %d\n",row+1,column+1);

    return 0;
}
