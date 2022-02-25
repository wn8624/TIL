#include <stdio.h>
/*
기본자료구조 - 다차원 배열을 공부하기 위한 응용문제
윤년일때와 평년일 때의 y m d에 대한 데이터가 담긴 배열을 정의 하는 mdaysㅇ
윤년인지 아닌지 판단해주는 함수 isleap
그리고 지난 날 수를 출력해주는 함수 dayofyear 
*/

int mdays[][12] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int isleap(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int dayofyear(int y, int m, int d)
{
    int i = 0;
    int days = d;
    while (i < m - 1)
    {
        days += mdays[isleap(y)][i];
        i++;
    }
    return days;
}

int main()
{
    int year, month, day;
    int retry;

    do //두 와일문 > 일단 한번 실행후 while문의 조건식이 참이면(1) 다시 실행 거짓이면(1이 아닐시) 탈출
    {
        printf("년 : ");
        scanf("%d", &year);
        printf("월 : ");
        scanf("%d", &month);
        printf("일 : ");
        scanf("%d", &day);

        printf("%d년의 %d일째입니다.\n", year, dayofyear(year, month, day));
        printf("다시 할까요?((1 --- 예/ 0 --- 아니오) : ");
        scanf("%d", &retry);
    } while (retry == 1);

    return (0);
}
