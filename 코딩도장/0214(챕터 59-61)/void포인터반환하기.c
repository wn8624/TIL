#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

void *allocMemory()    // void 포인터를 반환하는 allocMemory 함수 정의
{
    return malloc(100);    // void 포인터 반환
}

int main()
{
    char *s1 = allocMemory();
    strcpy(s1, "Hello, world!");
    printf("%s\n", s1);
    free(s1);

    int *numPtr1 = allocMemory();
    numPtr1[0] = 10;
    numPtr1[1] = 20;
    printf("%d %d\n", numPtr1[0], numPtr1[1]);
    free(numPtr1);
    return (0);
}