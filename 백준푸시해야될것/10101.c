#include <stdio.h>

void three_degree(int *p);

int main(void){

    int degree[3];
    int *p = degree;

    three_degree(&degree[0]);

    return 0;
}

void three_degree(int *p){
    
    int i;
    for (i=0; i<3; i++){
        scanf("%d", (p+i));
    }
    if ((*(p+0) == 60) && (*(p+0) == *(p+1)) && (*(p+0) == *(p+2))){
        printf("Equilateral");
    }


}
