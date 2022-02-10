// 전달받은 배열의 최댓값을 구하는 함수 maxof 구현하기 
#include <stdio.h>
#include <stdlib.h> //배열의 동적할당 calloc 함수 써주기 위함

int maxof(const int a[], int n)
{
    int i;
    int max = a[0];
    for (i =1; i< n; i++)
        if (a[i] > max) max = a[i];
    return (max);
}
int main()
{
    int i;
    int *height;
    int number;

    printf("사람의 수 : ");
    scanf("%d", &number);
    height = calloc(number, sizeof(int));
    printf("%d 사람의 키를 입력하세요. \n", number);
    for(i = 0; i < number; i++)
    {
        printf("%d번째 사람의 키 : ", i);
        scanf("%d", &height[i]);
    }
    printf("가장 큰 사람의 키는 %d입니다.", maxof(height, number));
    return (0);
}