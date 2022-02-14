//void포인터는 자료형이 정해져있지 않으므로 역참조를 할 수 없다. 하여 void 포인터는 역참조를 하고 싶을때  다른 자료형으로 변환하여 역참조를 한다.
#include <stdio.h>

int main()
{
    int num1 = 10;
    float num2 = 3.5f;
    char c1 = 'a';
    void *ptr;

    ptr = &num1;
    printf("%d\n", *(int *)ptr);

    ptr = &num2;
    printf("%0.1f\n", *(float *)ptr);

    ptr = &c1;
    printf("%c\n", *(char *)ptr);

    return (0);
}