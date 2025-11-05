#include <stdio.h>

int main(void){
    char str[] = "apple";

    printf("apple이 저장된 시작주소 값: %p\n", "apple");
    printf("배열 주소: %p\n",str);
    printf("두 번째 문자 주소 값: %p\n", "apple"+1);
   
    
    printf("첫 번째 문자: %c\n", *"apple");
     printf("두 번째 문자: %c\n", *(str+1));
    printf("두 번째 문자: %c\n", *("apple"+1));
    printf("배열로 표현한 세 번째 문자: %c\n", "apple"[4]);

    return 0;
}