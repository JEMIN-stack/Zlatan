# include <stdio.h>
int main(void){
    
    int i,j,N,temp;
    
    scanf("%d", &N);
    
    int dist[N];
    
    for (i=0; i<N; i++){
        scanf("%d", &dist[i]);
    } 

    for (i=0; i<N-1; i++){
        for (j=i+1; j<N; j++){
            if (dist[i] > dist[j]){
                temp = dist[i];
                dist[i] = dist[j];
                dist[j] = temp;
            }
        }
    }
    
    for (i=0; i<N; i++)
        printf("%d\n", dist[i]);    

    return 0;
}