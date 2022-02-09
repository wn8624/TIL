#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct {
    char name[20];
    int age;
    char address[100];
} Person; // 구조체를 정의할 때 typedef struct 구조체이름 {} 별칭; 하면 된다.

int main()
{
    Person p1 = {.name ="정준영", .age = 26, .address = "서울시 마포구 독막로 20길"};

    printf("이름: %s\n", p1.name);       
    printf("나이: %d\n", p1.age);        
    printf("주소: %s\n", p1.address); 

    Person p2 = {"정영주", 29, "서울시 마포구 독막로 21길"};
    
    printf("이름: %s\n", p2.name);       
    printf("나이: %d\n", p2.age);        
    printf("주소: %s\n", p2.address); 

    return (0);
}