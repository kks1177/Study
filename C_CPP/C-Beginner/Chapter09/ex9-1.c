// ex9-1.c
// 스택 구현 예 1

#include <stdio.h>

int main()
{
    char stack[5] = {0};
    int top = 0;

    stack[top] = 'A';
    printf(" %c 자동차가 터널에 들어감\n", stack[top]);
    top++;

    stack[top] = 'B';
    printf(" %c 자동차가 터널에 들어감\n", stack[top]);
    top++;

    stack[top] = 'C';
    printf(" %c 자동차가 터널에 들어감\n", stack[top]);
    top++;

    printf("\n");

    top--;
    printf(" %c 자동차가 터널을 빠져나감 \n", stack[top]);
    stack[top] = ' ';
    top--;
    printf(" %c 자동차가 터널을 빠져나감 \n", stack[top]);
    stack[top] = ' ';
    top--;
    printf(" %c 자동차가 터널을 빠져나감 \n", stack[top]);
    stack[top] = ' ';
}