#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    int x;
    int y;
}   Point2D;

int main()
{
    Point2D p1;
    Point2D *p2 = malloc(sizeof(Point2D));
    p1.x = 10;
    p1.y = 20;
    memcpy(p2, &p1, sizeof(Point2D)); //메모리의 내용을 복사 strcpy 같은 함수
    printf("%d %d", p2->x, p2->y);
    return (0);
}