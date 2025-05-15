// ex7-11.c
// goto문 사용 예

#include <stdio.h>

int main()
{
    int hap = 0, i = 0;

    for (i = 1; i <= 100; i++)
    {
        hap += i;

        if (hap > 2000)
            goto mygoto;
    }

mygoto:
    printf("1~%d까지 합하면 2000이 넘어요. \n", i);
}