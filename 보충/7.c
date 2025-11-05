# include <stdio.h>
int main(void){
    
    int i,j,N,temp;
    
    scanf("%d", &N);
    
    int dist[N];
    int *p = dist;
    
    for (i=0; i<N; i++){
        scanf("%d", (p+i));
    } 

    for (i=0; i<N-1; i++){
        for (j=i+1; j<N; j++){
            if (*(p+i) < *(p+j)){
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
    
    for (i=0; i<N; i++)
        printf("%d\n", *(p+i));    

    return 0;
}