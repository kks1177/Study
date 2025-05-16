// ex11-12.c
// 파일을 이용한 출력 예 3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    FILE *wfp;
    int hap = 0, in = 0, i = 0;

    wfp = fopen("C:\\temp\\data7.txt", "w");

    for (i = 0; i < 5; i++)
    {
        printf(" 숫자 %d : ", i + 1);
        scanf("%d", &in);
        hap += in;
    }
    fprintf(wfp, "합계 ==> : %d \n", hap);

    fclose(wfp);
}