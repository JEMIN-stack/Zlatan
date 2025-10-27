#include <stdio.h>

int main(void){
    int num1,num2,k,n;

    num1 = 7;
    num2 = 3;
    k = num2 / num1;
    n = num2 % num1;
    printf("%d\n",k);
    printf("%d\n",n);

    return 0;
}