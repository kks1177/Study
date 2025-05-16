// ex14-1.c
// main() 함수에서의 매개변수 사용 예

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    printf(" argc 매개변수 ==> %d \n", argc);

    for (i = 0; i < argc; i++)
        printf(" argv[%d] 매개변수 ==> %s \n", i, argv[i]);
}