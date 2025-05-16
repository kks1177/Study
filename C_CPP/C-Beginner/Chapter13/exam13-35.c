// exam13-35.c
// 구조체와 공용체의 혼합

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    typedef struct _person
    {
        char name[10];
        union _id
        {
            char phone[15];
            char jumin[15];
        } id;
    } person;
    person p1;

    printf("이름 --> ");
    scanf("%s", p1.name);
    printf("전화번호 또는 주민번호 --> ");
    scanf("%s", p1.id.jumin);

    printf("\n --구조체/공용체 혼합 활용 --\n");
    printf("이름 ==> %s \n", p1.name);
    printf("전화번호/주민번호 ==> %s \n", p1.id.phone);
}