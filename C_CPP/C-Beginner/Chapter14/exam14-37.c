// exam14-37.c
// 텍스트 파일 복사

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
{
    char str[200] = {0};
    FILE *rfp;
    FILE *wfp;

    if (argc != 3)
    {
        printf("\n -- 매개변수 2개 사용하세요 -- \n");
        return;
    }

    rfp = fopen(argv[1], "r");
    wfp = fopen(argv[2], "w");

    for (;;)
    {
        fgets(str, 199, rfp);
        if (feof(rfp))
            break;
        fputs(str, wfp);
    }
    fclose(rfp);
    fclose(wfp);
}