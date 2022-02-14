#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *numPtr1 = malloc(sizeof(int)); // numPtr1 4바이트 할당해줌
    short *numPtr2;

    *numPtr1 = 0x12345678;
    numPtr2 =(short *)numPtr1;
    
    printf("0x%x\n", *numPtr2 );
    return (0);
}