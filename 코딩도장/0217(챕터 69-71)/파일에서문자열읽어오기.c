#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h> 

int main()
{
    char s1[10];
    int num;

    FILE *fp = fopen("text.txt", "r"); 
    
    fscanf(fp, "%s %d", s1, &num); //fscanf 는 읽어들일 파일의 메모리주소, 형식지정자, 값을 저장할 변수. 이렇게 써주면 됨.
    printf("%s %d", s1, num);  //저장했으니 그대로 출력하면 됨.
    fclose(fp);
    return (0);
}