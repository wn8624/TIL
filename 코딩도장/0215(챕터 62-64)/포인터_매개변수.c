#include <stdio.h>

void swapNumber(int *first, int *second)    // 반환값 없음, int형 매개변수 두 개 지정
{
    int temp;    // 임시 보관 변수

    temp = *first;
    *first = *second;
    *second = temp;
    
}

int main()
{
    int num1 = 10;
    int num2 = 20;

    swapNumber(&num1, &num2);    // 변수 num1과 num2를 넣어줌 >> 함수에서는 바뀌지만 함수 바깥인 main 함수에서의 변수에는 영향이 없음. 고로 리턴을 주거나 포인터 매개변수를 통해서 직접적으로 메모리 주소안에 있는 값에 접근해야 함.

    printf("%d %d\n", num1, num2);    // 10 20: swapNumber 함수와는 상관없이 
                                      // 처음 저장한 10과 20이 출력됨

    return 0;
}