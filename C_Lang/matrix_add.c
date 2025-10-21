#include <stdio.h>

int main(void)
{
    int i,j,N,M;
    scanf("%d%d",&N,&M);
    
    int numarr_A[N][M];
    for (i=0; i<N; i++)
    {   
        for (j=0; j<M; j++)
        {    
            scanf("%d",&numarr_A[i][j]);  
        }
    }

    int numarr_B[N][M];
    for (i=0; i<N; i++)
    {   
        for (j=0; j<M; j++)
        {    
            scanf("%d",&numarr_B[i][j]);  
        }
    }
    
    int numarr_sum [N][M];
    for (i=0; i<N; i++)
    {   
        for (j=0; j<M; j++)
        {    
            numarr_sum[i][j] =  numarr_A[i][j] + numarr_B[i][j];
            printf("%d", numarr_sum[i][j]);
            if (j<M-1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}