// ex7-5.c
// do~while문 사용 예 1

#include <stdio.h>

int main()
{
    int a = 100;

    while (a == 200)
    {
        printf("while문 내부에 들어 왔습니다. \n");
    }
    do
    {
        printf("do~while문 내부에 들어 왔습니다. \n");
    } while (a == 200);
}