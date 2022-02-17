#include <stdio.h>

int add(int a, int b)    // int형 반환값, int형 매개변수 두 개
{
    return a + b;
}

void executor(int (*fp)(int, int)) //executor이라는 함수는 매개변수가 함수포인터이다. 함수포인터는 함수의 메모리 주소값을 전달받아야 한다.
{
    printf("%d", fp(1, 2)); //매개변수로 (int, int)를 가진 함수포인터 fp를 매개변수로 갖고있기에 가능한 것이다. 
}

int main()
{
    executor(add); //고로 main함수의 executor(함수포인터를 매개변수로 갖는 함수)를 호출할 때 전달해주는 인수로 함수의 메모리주소값인 이름만 전달해주는 모습이다.
    return (0);
}