#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void *allocArray(void **numArr, int size_arr, int size)
{
    *numArr = malloc(sizeof(size_arr) * size);
    return (long long *)numArr;
}

int main()
{
    long long *numArr1;
    int *numArr2;

    allocArray((void **)&numArr1, 10, sizeof(long long));
    allocArray((void **)&numArr2, 3, sizeof(int));

    scanf("%lld %d", &numArr1[9], &numArr2[2]);
    printf("%lld %d\n", numArr1[9], numArr2[2]);

    free(numArr2);
    free(numArr1);

    return 0;
}