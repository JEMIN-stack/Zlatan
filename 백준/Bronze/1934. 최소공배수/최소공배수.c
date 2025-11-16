#include<stdio.h>
int main(void){
    int T;
    int A,B;
    int *pa = &A;
    int *pb = &B;
    
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        scanf("%d %d",pa,pb);
        if (*pa==*pb){
            printf("%d\n",*pa);
        }
        else if (*pa % *pb == 0){
            printf("%d\n",*pa);
        }
        else if (*pb % *pa == 0){
            printf("%d\n",*pb);
        }
        else {
            int B_real = *pb;
            int multi = 1;

            for (int i=2; i < B_real/2; i++){
                while ((*pb % i == 0) && (*pa % i == 0)){

                    *pb = *pb / i;
                    *pa = *pa / i;
                    multi *= i;
                }
            }
            int lcm = multi * (*pa) * (*pb);
            printf("%d\n", lcm);
        }
    }
    return 0;
}