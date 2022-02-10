#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
    char name[20]; //구조체 멤버 name
    int age; //구조체 멤버 age
    char address[100]; //구조체 멤버 address 
};

int main()
{
    struct Person p1; //구조체 변수 p1 선언

    strcpy(p1.name, "홍길동"); //값이 문자열이라 할당연산자로 할당할 수 없으니 strcpy 함수 활용
    p1.age = 30; //p1 구조체 변수에 age멤버에 접근하여 30이라는 int 값 할당
    strcpy(p1.address, "서울시 용산구 한남동"); 

    memset(&p1, 0, sizeof(struct Person)); //메모리의 값 할당해주는 함수

    printf("이름: %s\n", p1.name);
    printf("나이: %d\n", p1.age);
    printf("주소: %s\n", p1.address);

    return 0;
}