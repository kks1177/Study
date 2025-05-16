// exam13-36.c
// 열거형을 활용한 월 이름 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    enum month
    {
        January = 1,
        February,
        March,
        April,
        May,
        June,
        July,
        Auguest,
        September,
        October,
        November,
        December
    };
    enum month mm;

    printf("월 입력 : ");
    scanf("%d", &mm);

    switch (mm)
    {
    case January:
        printf("%d월은 January 입니다.", mm);
        break;
    case February:
        printf("%d월은 February 입니다.", mm);
        break;
    case March:
        printf("%d월은 March 입니다.", mm);
        break;
    case April:
        printf("%d월은 April 입니다.", mm);
        break;
    case May:
        printf("%d월은 May 입니다.", mm);
        break;
    case June:
        printf("%d월은 June 입니다.", mm);
        break;
    case July:
        printf("%d월은 July 입니다.", mm);
        break;
    case Auguest:
        printf("%d월은 Auguest 입니다.", mm);
        break;
    case September:
        printf("%d월은 September 입니다.", mm);
        break;
    case October:
        printf("%d월은 October 입니다.", mm);
        break;
    case November:
        printf("%d월은 November 입니다.", mm);
        break;
    case December:
        printf("%d월은 December 입니다.", mm);
        break;
    default:
        printf("잘못 입력했군요.");
    }
    printf("\n\n");
}