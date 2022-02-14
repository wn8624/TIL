#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *numPtr = malloc(sizeof(int));
    char *charPtr;

    *numPtr = 0x12345678;
    charPtr = (char *)numPtr;

    printf("0x%x\n", *charPtr); //포인터의 값을 참조할 때는 *를 붙혀주어야 함.
    free(numPtr);
    return (0);
}