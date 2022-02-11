#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

struct Phone {    // 휴대전화 구조체
    int areacode;                 // 국가번호
    unsigned long long number;    // 휴대전화 번호
};

struct Person {    // 사람 구조체
    char name[20];          // 이름
    int age;                // 나이
    struct Phone *phone;    // 휴대전화. 구조체 포인터 선언
};

int main()
{
    struct Person *p1 = malloc(sizeof(struct Person));
    p1->phone = malloc(sizeof(struct Phone));

    p1->phone->areacode = 82;
    p1->phone->number = 97059547;

    free(p1->phone);
    free(p1);
    return (0);
}