#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fgets, fclose 함수가 선언된 헤더 파일
#include <string.h>
#include <stdlib.h>

int main()
{

    FILE *fp = fopen("text.txt", "r");

    fgets(buffer, sizeof(buffer), fp);
    printf("%s", buffer);
    return (0);
}