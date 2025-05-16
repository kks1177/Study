// ex10-5.c
// 본격적인 함수 사용 예 2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calc(int v1, int v2, int op)
{
    int result = 0;

    switch (op)
    {
    case 1:
        result = v1 + v2;
        break;
    case 2:
        result = v1 - v2;
        break;
    case 3:
        result = v1 * v2;
        break;
    case 4:
        result = v1 / v2;
        break;
    }
    return result;
}

int main()
{
    int res = 0, oper = 0, a = 0, b = 0;

    printf("계산 입력 (1:+, 2:-, 3:*, 4:/) : ");
    scanf("%d", &oper);

    printf("계산할 두 수 입력 : ");
    scanf("%d %d", &a, &b);

    res = calc(a, b, oper);

    printf("계산 결과는 : %d\n", res);
}