#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // fopen, fputs, fclose 함수가 선언된 헤더 파일
#include <string.h>

int main()
{
    char *s1 = "Fuck";
    FILE *fp = fopen("text.txt", "w");

    fputs("Hello Junyeong", fp);
    fwrite(s1, strlen(s1), 1, fp);
    return 0;
}