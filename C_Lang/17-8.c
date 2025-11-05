#include <stdio.h>

typedef struct{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
} address;

// 처음부터 typedef 사용해 구조체명 정의
// typedef struct {
//     int num;
//     double grade;
// } Student;



void print_list(address *lp);

int main (void){
    address list[5] = {
        {"홍길동",23, "111-1111", "울릉도 독도"},
        {"이순신",35, "222-2222", "서울 서대문구"},
        {"홍길동",105, "333-3333", "완도 청해진"},
        {"즐라탄",40, "999-9999", "스웨덴 말뫼"},
        {"메시",38, "888-8888", "미국 마이애미"}

    };
    

    
    print_list(list);

    return 0;
}

void print_list(address *lp){
    int i;

    for (i=0; i<5; i++){
        printf("%10s%5d%15s%20s\n",
            (lp+i)->name, (lp+i)->age, (lp+i)->tel,(lp+i)->addr);
    }
}