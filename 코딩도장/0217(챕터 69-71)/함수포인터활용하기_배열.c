#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main()
{
    int funcNumber;
    int num1, num2;
    int (*fp[4])(int, int); //함수포인터 "배열"을 선언할 때는 함수포인터를 선언해줄 때 이름 뒤에 [요소의 개수]와 같이 해주면 된다.
    fp[0] = add;
    fp[1] = sub;
    fp[2] = mul;
    fp[3] = div;

    printf("함수 번호와 계산값을 입력하시오 : ");
    scanf("%d %d %d", &funcNumber, &num1, &num2);
    printf("%d", fp[funcNumber](num1, num2));
    return (0);
}