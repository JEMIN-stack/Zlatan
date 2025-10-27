#include <stdio.h>
#include <string.h>

int main(void){
    char str1[80] = "pear"; 
    char str2[80] = "peat";
    
    printf("사전에 나중에 나오는 과일 이름: ");

    if (strncmp(str1, str2, 3) > 0)
        printf("%s\n", str1);
    else if (strncmp(str1, str2, 3) == 0)
        printf("%s %s\n", str1,str2);
    else 
        printf("%s\n", str2);
        
    return 0;
}