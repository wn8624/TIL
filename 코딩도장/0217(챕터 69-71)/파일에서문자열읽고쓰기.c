//프로그래밍에서 중요한 축을 차지하는 부분이 "파일처리"이다. 파일을 읽고쓰고
//파일에 문자열을 쓰고싶을 때는 먼저 fopen 함수로 파일포인터를 얻은 뒤 fprintf 함수를 
#define _CRT_SECURE_NO_WARNINGS    // fopen 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h> 

int main()
{
    FILE *fp = fopen("text.txt", "w"); //fopen 함수 파일을 읽어오고 성공할 시 파일의 주소값을 반환하기에 fp라는 파일 포인터를 선언해준 뒤 넣어줌
    
    fprintf(fp, "%s %d\n", "Hello", 100);
    fclose(fp);
    
    return (0);
}