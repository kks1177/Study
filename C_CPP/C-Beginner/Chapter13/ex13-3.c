// ex13-3.c
// 구조체를 사용하여 변경한 [기본 13-2]

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    struct student
    {
        char name[10];
        int kor, eng;
        float avg;
    };

    struct student s;

    printf("이름 : ");
    scanf("%s", s.name, 9);

    printf("국어 점수 : ");
    scanf("%d", &s.kor);

    printf("영어 점수 : ");
    scanf("%d", &s.eng);

    s.avg = (s.kor + s.eng) / 2.0f;

    printf("\n");
    printf("학생 이름 ==> %s \n", s.name);
    printf("국어 점수 ==> %d \n", s.kor);
    printf("영어 점수 ==> %d \n", s.eng);
    printf("평균 점수 ==> %5.1f \n", s.avg);
}