#include<stdio.h>
#include<stdlib.h>

struct Person {
    char name[20];         // 이름
    int age;               // 나이
    struct Phone{
        int areacode;
        unsigned long long number;
    }  phone; //핸드폰 정보
};

int main()
{
    struct Person *p1 = malloc(sizeof(struct Person));

    p1->phone.areacode = 82;          // 변수.멤버.멤버 순으로 접근하여 값 할당
    p1->phone.number = 3045671234;

    printf("%d %llu\n", p1->phone.areacode, p1->phone.number);
    free(p1);
    return (0);
}