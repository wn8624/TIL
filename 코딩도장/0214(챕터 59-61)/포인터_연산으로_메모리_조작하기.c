#include <stdio.h>
int main()
{
    int numArr[5] = { 11, 22, 33, 44, 55 }; //배열은 첫번째 요소의 메모리 주소값이 들어있다.
    int *numPtrA;
    int *numPtrB;
    int *numPtrC;

    numPtrA = &numArr[2]; //해당 인덱스의 주소값을 넣어줌

    numPtrB = numArr - 1; //배열 numArr의 첫번쨰 요소에서 한칸 증가 
    numPtrC = numArr - 2; //배열 numArr의 첫번째 요소의 주소값에서 2칸(sizeof(int) * - 2) 빼짐.

    printf("%p\n", numPtrA);
    printf("%p\n", numPtrB);
    printf("%p\n", numPtrC);


    //즉 "포인터 연산"은 포인터 자료형의 크기만큼 더하거나 빼지는 것이다.
    return (0);
}