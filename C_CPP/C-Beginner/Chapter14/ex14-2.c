// ex14-2.c
// main() 함수에서의 매개변수 사용 예 2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[])
{
    char str[200] = {0};
    FILE *rfp;

    if (argc != 2)
    {
        printf("\n -- 매개변수를 1개 사용하세요. -- \n");
        return;
    }

    rfp = fopen(argv[1], "r");

    for (;;)
    {
        fgets(str, 199, rfp);

        if (feof(rfp))
            break;
        printf("%s", str);
    }
    fclose(rfp);
}