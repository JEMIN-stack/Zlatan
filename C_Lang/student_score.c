#include <stdio.h>

typedef struct{
    int number;
    char name[20];
    int kor_grade;
    int eng_grade;
    int math_grade;

} stu_record;

void print_list(stu_record *lp);


int main(void){
    
    int i,j;
    stu_record temp;
    stu_record list[5];
    // stu_record list[5] = {
    //     {315,"홍길동",80,75,90},
    //     {315,"이순신",88,92,100},
    //     {317,"서하윤",95,99,98},
    //     {318,"유관순",84,70,72},
    //     {319,"박신혜",60,65,40}
    // };

    for (i = 0; i < 5; i++) {
    
        printf("학생 %d의 정보를 입력하세요.\n", i + 1);

        printf("학번: ");
        scanf("%d", &(list[i].number));   // 정수이므로 & 필요

        printf("이름: ");
        scanf("%s", list[i].name);        // 문자열은 배열이므로 & 불필요

        printf("국어, 영어, 수학 점수: ");
        scanf("%d %d %d", &(list[i].kor_grade), &(list[i].eng_grade), &(list[i].math_grade));

        printf("\n");
    }

    printf("# 정렬 전 데이터...\n");
    print_list(list);

    for (i=0; i<4; i++){
        for (j=i+1; j<5; j++){
            int sum_i = list[i].kor_grade + list[i].eng_grade + list[i].math_grade;
            int sum_j = list[j].kor_grade + list[j].eng_grade + list[j].math_grade;
            if (sum_i < sum_j){
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }

    printf("# 정렬 후 데이터...\n");
    print_list(list);

    return 0;
}


void print_list(stu_record *lp){
    int i;
    int grade_sum;
    double grade_avg;
    char *grade_ABC;

    
    for (i=0; i<5; i++){
        grade_sum = 0;
        grade_avg = 0;
        
        grade_sum = (lp+i)->kor_grade + (lp+i)->eng_grade + (lp+i)->math_grade;
        grade_avg = (double)grade_sum / 3;
        
        if (grade_avg >= 90){
            grade_ABC = "A";
        }
        else if (grade_avg >= 80){
            grade_ABC = "B";
        }
        else if (grade_avg >= 70){
            grade_ABC = "C";
        }
        else {
            grade_ABC = "F";
        }
        
        printf("%5d%10s%3d%3d%4d%5d%5.1lf%3s\n",
            (lp+i)->number, (lp+i)->name, (lp+i)->kor_grade,(lp+i)->eng_grade,(lp+i)->math_grade, grade_sum, grade_avg, grade_ABC);
    }
}







