// ex11-10.c
// 파일을 이용한 출력 예 1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char s[20] = {0};
    FILE *wfp;

    wfp = fopen("C:\\temp\\data3.txt", "w");

    printf("문자열 입력 (최대 19자) : ");
    gets(s);

    fputs(s, wfp);

    fclose(wfp);
}