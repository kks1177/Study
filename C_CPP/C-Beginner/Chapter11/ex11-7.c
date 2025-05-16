// ex11-7.c
// 파일을 이용한 입력 예 1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char s[20] = {0};
    FILE *rfp;

    rfp = fopen("C:\\temp\\data1.txt", "r");

    fgets(s, 20, rfp);

    printf("파일에서 읽은 문자열 : ");
    puts(s);

    fclose(rfp);
}