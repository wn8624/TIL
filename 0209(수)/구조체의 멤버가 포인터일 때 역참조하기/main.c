#include <stdio.h>
#include <stdlib.h>

struct Data {
    char c1;
    int *numPtr;    // 포인터 > int 데이터가= 들어있는 메모리를 "가리키는" 변수 
};

int main()
{
    int num1 = 10;
    struct Data d1; //구조체 변수 선언
    struct Data *d2 = malloc(sizeof(struct Data));  //구조체 포인터 변수 선언 
    
    d1.numPtr = &num1;
    d2->numPtr = &num1;
    printf("%d\n", *d1.numPtr); //구조체 변수 역참조 
    printf("%d\n\n", *d2->numPtr); //구조체 포인터 변수 역참조 

    d2->c1 = 'a';
    printf("%c\n", (*d2).c1);
    printf("%c\n", (*d2).c1);

    return (0);
}