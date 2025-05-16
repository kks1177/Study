// ex11-4.c
// 문자 입출력 함수 사용 예 2

#include <stdio.h>
#include <string.h>

int main()
{
    char password[5] = "5678";
    char input[5] = {0};
    int i = 0;

    printf("비밀번호 4글자 입력 : ");
    for (i = 0; i < 4; i++)
        input[i] = getch();

    if (strncmp(password, input, 4) == 0)
        printf("\n 비밀번호 통과~~ \n");
    else
    {
        printf("\n 입력한 비밀번호 ");

        for (i = 0; i < 4; i++)
            putch(input[i]);

        printf(" 가 틀렸음 \n");
    }
}