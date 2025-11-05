#include <stdio.h>

int main(void){
    int ary[3];
    int *pa = &ary[0]; // ary는 &ary[0]과 의미하는 바가 같음
    int i;

    *pa = 10;
    *(pa+1) = 20;
    
    pa[2] = pa[0] + pa[1];
    *(pa+2) =*(pa+0) + *(pa+1);

    for (i=0; i<3; i++){
        printf("%5d",pa[i]);
    }

    printf("ary 사이즈: %d\n",sizeof(ary));
    printf("pa 사이즈: %d\n",sizeof(pa));

    return 0;
}