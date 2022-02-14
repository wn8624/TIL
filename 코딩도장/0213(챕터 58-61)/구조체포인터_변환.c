//자료형 변환은 주로 구조체 포인터를 변환할 때 사용한다.
//구조체는 변수가 많을수록 메모리를 많이 차지하므로 동적할당을 통해서 힙영역에 
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char c1;
    int num1;
} Data;

int main()
{
    Data *d1 = malloc(sizeof(Data));

    void *ptr;

    d1->c1 = 'a';
    d1->num1 = 10;

    ptr = d1; //void 포인터는 자료형을 가리지 않고 다 받아들일 수 있다 > 암시적 형변환이 일어나기 때문에 
    

    printf("%c\n", ((Data *)ptr)->c1); //구조체 포인터에 멤버에 접근할 때는 형변환 해준 뒤 한번더 괄호로 감싸준뒤 기존대로 ->로 접근한다.
    printf("%d\n" ((Data *)ptr)->num1);
    free(d1);
    return (0);
}