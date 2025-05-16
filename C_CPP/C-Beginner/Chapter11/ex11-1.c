// ex11-1.c
// 서식화된 입출력 함수 사용 예

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a = 0;
    float b = 0.0;
    char ch = 'a';
    char s[20] = {0};

    printf("정수 입력 : ");
    scanf("%d", &a);
    printf("실수 입력 : ");
    scanf("%f", &b);
    printf("문자 입력 : ");
    scanf("%c", &ch);
    printf("문자열 입력 : ");
    scanf("%s", &s);

    printf("\n정수의 10진수 ==> %d \n", a);
    printf("정수의 16진수 ==> %X \n", a);
    printf("정수의 8진수 ==> %o \n", a);

    printf("실수 ==> %10.3f \n", b);
    printf("실수(공학용) ==> %e \n", b);

    printf("문자 ==> %c \n", ch);
    printf("문자열 ==> %s \n", s);
}