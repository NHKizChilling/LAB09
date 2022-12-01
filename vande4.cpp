#include <stdio.h>
#include <stdlib.h>

void input();
int gcd(int a, int b);
void output(int a, int b);
void toigian(int a, int b);

int main()
{
    system("cls");
    int a,b;
    input();
    scanf("%d", &a );
    input();
    scanf("%d", &b );
    output(a,b);
    toigian(a,b);
    return 0;
}

void input()
{
    printf("Nhap so: ");
}

int gcd( int a, int b )
{
    int a1 = abs(a);
    do
    {
        if ( a1 > b )
            a1 -= b;
        else 
            b -= a1;
    } while ( a1 != b );
    return a1;
}

void output(int a, int b)
{
    printf("Phan so chua toi gian: %d/%d", a, b);
}

void toigian(int a, int b)
{
    int uoc = gcd(a,b);
    a = a / uoc;
    b = b / uoc;
    printf("\nPhan so da toi gian la: %d/%d", a, b);
}