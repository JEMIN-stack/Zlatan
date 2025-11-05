#include <stdio.h>

int main(void){
    char * dessert = "apple";

    printf("오늘 후식은 %d입니다.\n", *dessert);
    dessert = "banana";
    printf("오늘 후식은 %s입니다.\n", dessert);

    return 0;
}