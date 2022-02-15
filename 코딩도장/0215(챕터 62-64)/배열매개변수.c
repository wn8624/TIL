#include <stdio.h>

void printArray(int *numArr, int size)
{
    for (int i=0; i < size; i++)
    {
        printf("%d ", numArr[i]);
    }
    printf("\n");
}

int main()
{
    int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    printArray(numArr, sizeof(numArr) / sizeof(int));    // 배열과 요소의 개수를 넣음

    return 0;
}