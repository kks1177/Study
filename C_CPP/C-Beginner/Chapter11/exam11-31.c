// exam11-31.c
// 파일에서 읽어온 문자열을 파일에 반대 순서로 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *rfp, *wfp;
    char str1[200] = {0}, str2[200] = {0};
    int size = 0, i = 0;

    rfp = fopen("C:\\temp\\in.txt", "r");
    wfp = fopen("C:\\temp\\out.txt", "w");

    while (1)
    {
        fgets(str1, 200, rfp);

        if (feof(rfp))
            break;
        size = strlen(str1);
        for (i = size - 1; i >= 0; i--)
            str2[size - 1 - i] = str1[i - 1];

        str2[size - 1] = '\0';
        fputs(str2, wfp);
        fputs("\n", wfp);
    }
    fclose(rfp);
    fclose(wfp);
}