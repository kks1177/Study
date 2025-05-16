// exam9-26.c
// 포인터를 이용한 배열의 정렬

#include <stdio.h>

int main()
{
    int s[10] = {1, 0, 3, 2, 5, 4, 7, 6, 9, 8};
    int tmp = 0, i = 0, k = 0;
    int *p;

    p = s;

    printf("정렬 전 배열 s ==> ");

    for (i = 0; i < 10; i++)
        printf("%d ", *(p + i));
    printf("\n");

    for (i = 0; i < 9; i++)
    {
        for (k = 0; k < 10; k++)
        {
            if (*(p + i) > *(p + k))
            {
                tmp = *(p + i);
                *(p + i) = *(p + k);
                *(p + k) = tmp;
            }
        }
    }
    printf("정렬 후 배열 s ==> ");
    for (i = 0; i < 10; i++)
        printf("%d ", *(p + i));
    printf("\n");
}