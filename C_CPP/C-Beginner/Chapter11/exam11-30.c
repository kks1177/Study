// exam11-30.c
// 구구단을 파일에 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    FILE *wfp;
    int i = 0, k = 0;

    wfp = fopen("C:\\temp\\gugu.txt", "w");
    for (i = 2; i <= 9; i++)
        fprintf(wfp, " #제%단# ", i);
    fprintf(wfp, "\n\n");
    for (i = 1; i <= 9; i++)
    {
        for (k = 2; k <= 9; k++)
        {
            fprintf(wfp, "%2dX%2d=%2d ", k, i, k * i);
        }
        fprintf(wfp, "\n");
    }
    fclose(wfp);
}