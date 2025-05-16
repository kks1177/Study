// ex11-8.c
// 파일을 이용한 입력 예 2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char str[200] = {0};
    FILE *rfp;

    rfp = fopen("C:\\windows\\win.ini", "r");

    for (;;)
    {
        fgets(str, 200, rfp);

        if (feof(rfp))
            break;

        printf("%s", str);
    }
    fclose(rfp);
}