#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int *x;
    int na;
    printf("요소 개수 : ");
    scanf("%d", &na);
    x = calloc(na, sizeof(int));

    if  ( x == NULL)
        puts("메모리 할당에 실패하셨습니다.");
    else {
        printf("%d개의 정수를 입력하시요\n", na);
        for (int i = 0; i < na; i++)
        {
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        }
        for(int i = 0; i < na; i++)
        {
            printf("x[%d] : %d \n", i, x[i]);
        }
        free(x);
    }
    return (0);
}