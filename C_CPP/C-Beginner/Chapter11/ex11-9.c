// ex11-9.c
// 파일을 이용한 입력 예 3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    FILE *rfp;
    int hap = 0, in = 0, i = 0;

    rfp = fopen("C:\\temp\\date2.txt", "r");

    for (i = 0; i < 5; i++)
    {
        fscanf(rfp, "%d", &in);
        hap += in;
    }
    printf("합계 ==> %d \n", hap);

    fclose(rfp);
}