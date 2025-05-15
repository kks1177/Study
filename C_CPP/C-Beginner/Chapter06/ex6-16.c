// ex6-16.c
// for문의 다양한 활용 예 1

#include <stdio.h>

int main()
{
    int i = 0, k = 0;

    for (i = 1, k = 1; i <= 9; i++, k++)
    {
        printf("%d X %d = %d \n", i, k, i * k);
    }
}