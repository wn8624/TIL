#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>    
#include <stdlib.h>

typedef struct {
    char name[20];       
    int age;             
    char address[100]; 
} Person;
int main()
{
    Person *p1 = malloc(sizeof(Person));
    strcpy(p1->name, "정준영");
    p1->age = 26;
    strcpy(p1->address, "서울시 마포구 독막로 20길 ");

    printf("%s\n", p1->name);
    printf("%d\n", p1->age);
    printf("%s\n", p1->address);
    free(p1);
    return (0);

}