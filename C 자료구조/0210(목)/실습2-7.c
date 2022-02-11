//배열의 요소를 역순으로 정렬하는 프로그램
#include<stdio.h>
#include<stdlib.h> //scanf로 받는 정수갯수 만큼 배열의 공간을 할당해주어야 하기때문에
void reverse_array(int a[], int size)
{
    int temp;
    for(int i = 0; i < size / 2; i++)
    {
        temp = a[i];
        a[i] = a[size -1 - i];
        a[size -1 - i] = temp;
    }
}

int main()
{
    int *x;
    int na;
    int number;

    printf("요소의 개수 : ");
    scanf("%d", &number);
    printf("%d개의 정수를 입력하세요.\n", number);
    x = calloc(number, sizeof(int));

    for(int i = 0; i < number; i++)
    {
        printf("x[%d] :", i);
        scanf("%d", &x[i]);
    }

    printf("배열의 요소를 역순으로 정렬했습니다.\n");
    reverse_array(x, number);
   for(int i = 0; i < number; i++)
    {
        printf("x[%d] : %d\n", i, x[i]);
    }
    return (0);
}
