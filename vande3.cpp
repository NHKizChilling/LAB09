#include <stdio.h>
#include <stdlib.h>

int sub(int x, int y);
int main()
{
    int a = 2;
    int b = 3;
    sub(b,a);
    printf("a la: %d\n", a);
    printf("b la: %d", b);
    return 0;
}

int sub(int x, int y)
{
    x = x + y;
    y = x + y;
    return 0;
}