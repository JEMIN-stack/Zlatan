#include <stdio.h>
int main(void){
    long long int A,B;
    scanf("%lld %lld", &A, &B);
    
    long long int num = 2;
    long long int temp = 1;

    long long int min = A;
    if (min > B){
        min = B;
    }

    while(num < (min + 1)){
        if ((A == 1) || (B == 1)){
            break;
        }
        else if((A % num != 0) || (B % num != 0)){
            num ++;
        }
        else {
            A /= num;
            B /= num;
            temp *= num;
        }
    }
    long long int lst_com_mul = A*B*temp;
    printf("%lld",lst_com_mul);

    return 0;
}