// exam13-34.c
// 구조체 포인터를 활용한 학생 관리

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main()
{
    struct student
    {
        char name[10];
        int age;
    };
    struct student *s;

    int cnt = 0, i = 0;

    printf("입력할 학생 수 : ");
    scanf("%d", &cnt);

    s = (struct student *)malloc((sizeof(struct student)) * cnt);

    for (i = 0; i < cnt; i++)
    {
        printf("이름과 나이 입력 : ");
        scanf("%s %d", s[i].name, &s[i].age);
    }
    printf("\n\n -- 학생 명단 -- \n");
    for (i = 0; i < cnt; i++)
        printf("이름:%s, 나이:%d \n", s[i].name, s[i].age);

    free(s);
}