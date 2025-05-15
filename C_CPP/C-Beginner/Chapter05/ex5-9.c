// ex5-9.c
// switch~case문 사용 예 1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a = 0;

    printf("1~4중에 선택 : ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("1 선택 \n");
        break;
    case 2:
        printf("2 선택 \n");
        break;
    case 3:
        printf("3 선택 \n");
        break;
    case 4:
        printf("4 선택 \n");
        break;
    default:
        printf("이상한 걸 선택함. \n");
    }
}