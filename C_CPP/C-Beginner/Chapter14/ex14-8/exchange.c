// exchange.c

extern int a, b;

void exchange()
{
    int tmp = 0;

    tmp = a;
    a = b;
    b = tmp;
}