#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D *p[3];    // 크기가 3인 구조체 포인터 배열 선언 >> 구조체 포인터 배열 선언만 하고 공간할당은 안해준 상태 >> malloc으로 해주어야 함
    for (int i = 0; i < sizeof(p) / sizeof(struct Point2D *); i++)
        p[i] = malloc(sizeof(struct Point2D));

    p[0]->x = 10;    // 인덱스로 요소에 접근한 뒤 화살표 연산자로 멤버에 접근
    p[0]->y = 20;
    p[1]->x = 30;
    p[1]->y = 40;
    p[2]->x = 50;
    p[2]->y = 60;

    printf("%d %d\n", p[0]->x, p[0]->y);    // 10 20
    printf("%d %d\n", p[1]->x, p[1]->y);    // 30 40
    printf("%d %d\n", p[2]->x, p[2]->y); 

    for(int i = 0; i < sizeof(p) / sizeof(struct Point2D *); i++) //배열의 요소의 개수를 구하기 위해서는 배열 전체크기 / 배열 요소의 크기 ( 해당 배열은 포인터 배열이므로 포인터를 나누어주면 된다.)
        free(p[i]);
    return (0);
}
