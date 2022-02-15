#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Point3D {
    float x;
    float y;
    float z;
};

struct Point3D *allocPoint3D(float x, float y, float z) 
{
    struct Point3D *allocPoint3D = malloc(sizeof(struct Point3D));
    allocPoint3D->x = x;
    allocPoint3D->y = y;
    allocPoint3D->z = z;
    
    return allocPoint3D;
};

int main()
{
    float x, y, z;
    struct Point3D *pos1;
   
    scanf("%f %f %f", &x, &y, &z);

    pos1 = allocPoint3D(x, y, z);  //pos1에는 주소값이 들어가야 함 고로 allocPoint3D 함수에는 3개의 인자를 받아서 값을 할당한 뒤 할당

    printf("%f %f %f\n", pos1->x, pos1->y, pos1->z);

    free(pos1);

    return 0;
}