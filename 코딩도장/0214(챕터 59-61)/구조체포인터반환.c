//한번에 많은 정보를 반환하고 싶을때 구조체 포인터를 반환한다. 
#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>
#include <stdlib.h>    // strcpy 함수가 선언된 헤더 파일

struct Person {
    char name[20];
    int age;
    char address[100];
};

struct Person *getPerson ()
{
    struct Person *p = malloc(sizeof(struct Person));
    strcpy(p->name, "정준영");
    p->age = 26;
    strcpy(p->name, "서울시 마포구 독막로 20길");

    return p;
}

int main()
{
    struct Person *p1;
    p1 = getPerson();
    printf("%s\n", p1->name);
    printf("%d\n", p1->age);
    printf("%s\n", p1->address);

    return (0);
}
