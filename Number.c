#include <stdio.h>

int main_printscanf() {

    // 프로젝트 
    // 경찰관이 범죄자자의 정보를 입수
    // 이름? 나이 몸무게? 키? 범죄명?

    char name[256];
    printf("이름이 뭐에요?");
    scanf_s("%s", name, sizeof(name));

    int age;
    printf("나이는?");
    scanf_s("%d", &age);

    int weight;
    printf("몸무게는?");
    scanf_s("%d", &weight);

    int height;
    printf("키는?");
    scanf_s("%d", &height);

    char crime[256];
    printf("죄목이 뭐에요?");
    scanf_s("%s", crime, sizeof(crime));


    printf("이름: %s, 나이: %d, 몸무게: %d, 키: %d, 범죄명: %s\n", name, age, weight, height, crime);


    return 0;
}