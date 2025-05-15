// ex8-5.c
// 배열의 초기화 예 2

#include <stdio.h>

int main()
{
    int aa[100] = {0}, bb[100] = {0};
    int i = 0;

    for (i = 0; i < 100; i++)
        aa[i] = i * 2;

    for (i = 0; i < 100; i++)
        bb[i] = aa[99 - i];

    printf("bb[0]는 %d, bb[99]는 %d 입력됨. \n", bb[0], bb[99]);
}