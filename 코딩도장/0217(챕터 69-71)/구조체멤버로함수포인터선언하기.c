#include <stdio.h>
#include <stdlib.h>

struct Calc {
    int (*fp)(int, int);
};
    //구조체 만들때는 항상 마지막에 세미클론 하는 습관!!
int add(int n1, int n2)
{
    return n1 + n2;
}
int main()
{
    struct Calc *c = malloc(sizeof(struct Calc)); //구조체는 선언만 해준다고 사용할 수 있는게 아니라 구조체 변수를 선언해주어야 한다.
    c->fp = add; //구조체 멤버에 접근할때는 '.'사용 > 멤버 중 fp 는 함수포인터이기 때문에 add라는 함수의 이름(메모리 주소값을 가지고 있음.)을 넣어줌
    printf("%d", c->fp(1, 2)); //고로 구조체 변수c 안에 멤버변수, 함수포인터 fp에 접근하기 위해서는 동일하게 c.fp라고 적어줌.
    free(c); //malloc으로 힙영역에 저장했따면 항상 free 해주는 습관!!! 
    return (0);
}