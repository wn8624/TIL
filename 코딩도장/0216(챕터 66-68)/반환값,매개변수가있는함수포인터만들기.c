#include <stdio.h>
int add(int a, int b)
{
    return a+b;
}

int main()
{
    //함수포인터 선언
    int (*fp)(int, int);
    fp = add;
    printf("%d\n", fp(3, 4 ));
    return (0);
}