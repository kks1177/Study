// ex13-2.c
// 구조체를 사용하지 않은 예

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char name[10] = {0};
    int kor = 0, eng = 0;
    float avg = 0.0;

    printf("이름 : ");
    scanf("%s", name, 9);

    printf("국어 점수 : ");
    scanf("%d", &kor);

    printf("영어 점수 : ");
    scanf("%d", &eng);

    avg = (kor + eng) / 2.0f;

    printf("\n");
    printf("학생 이름 ==> %s \n", name);
    printf("국어 점수 ==> %d \n", kor);
    printf("영어 점수 ==> %d \n", eng);
    printf("평균 점수 ==> %5.1f \n", avg);
}