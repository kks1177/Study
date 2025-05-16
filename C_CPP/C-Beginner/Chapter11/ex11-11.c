// ex11-11.c
// 파일을 이용한 출력 예 2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char str[200] = {0};
    FILE *rfp;
    FILE *wfp;

    rfp = fopen("C:\\windows\\win.ini", "r");
    wfp = fopen("C:\\temp\\data5.txt", "w");

    for (;;)
    {
        fgets(str, 200, rfp);

        if (feof(rfp))
            break;
        fputs(str, wfp);
    }
    fclose(rfp);
    fclose(wfp);
}