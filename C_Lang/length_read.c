#include <stdio.h>

int main(void){
    char str1[16] = {0};
    char str2[16] = {0};
    char str3[16] = {0};
    char str4[16] = {0};
    char str5[16] = {0};
    int i;

    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);
    scanf("%s", str4);
    scanf("%s", str5);

    for(i=0; i<15; i++){

        if (str1[i] != '\0'){
           printf("%c",str1[i]);
        }
        if (str2[i] != '\0'){
           printf("%c",str2[i]);
        }
        if (str3[i] != '\0'){
           printf("%c",str3[i]);
        }
        if (str4[i] != '\0'){
           printf("%c",str4[i]);
        }
        if (str5[i] != '\0'){
           printf("%c",str5[i]);
        }  
   
    }
  
    return 0;
}