#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *allocMemory()
{
    return malloc(sizeof(void));
}

int main()
{
    char *name;
    float *stats;

    name = allocMemory(); //name은 문자열 포인터
    strcpy(name, "Mercury"); //name이라는 배열에 Mercury 넣어줌
    printf("%s\n", name); //name이라는 문자열을 출력
    free(name);

    stats = allocMemory();
    stats[0] = 87.969f;
    stats[1] = 115.8776f;
    printf("%f %f\n", stats[0], stats[1]);
    free(stats);

    return 0;
}