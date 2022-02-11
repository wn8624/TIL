#include <stdio.h>

typedef struct {    // 구조체 정의
    char name[20];        // 구조체 멤버 1
    int age;              // 구조체 멤버 2
    char address[100];    // 구조체 멤버 3
}   Person;

int main()
{
    Person p1;
    Person *p2;

    p2 = &p1; //구조체 변수 p1의 메모리 주소를 구하여 구조체 포인터 p2에 할당해주면 된다. 
    p2 -> age = 26;

    printf("%d\n", p1.age); //역시나 구조체 변수에 멤버에 접근할 떄는 "." 를 사용하면 되고
    printf("%d", p2->age); // 구조체 포인터의 멤버에 접근할 때는 "->" 를 사용하면 된다.

    return (0);
}
