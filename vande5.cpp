#include <stdio.h>
#include <stdlib.h>

int sumDigit(int n);
int dv2(int n);
int dv3(int n);
int dv5(int n);
int dv6(int n);
int dv9(int n);
int input();

int main()
{
    system("cls");
    int n = input();
    printf("Tong cac chu so cua %d: %d", n, sumDigit(n));
    printf("N chia het:\n");
    if ( dv2(n) == 1 )
        printf("2: Yes\n");
    else 
        printf("2: No\n");

    if ( dv3(n) == 1 )
        printf("3: Yes\n");
    else 
        printf("3: No\n");

    if ( dv5(n) == 1 )
        printf("5: Yes\n");
    else 
        printf("5: No\n");

    if ( dv6(n) == 1 )
        printf("6: Yes\n");
    else 
        printf("6: No\n");

    if ( dv9(n) == 1 )
        printf("9: Yes");
    else 
        printf("9: No");
} 

int sumDigit(int n)
{
    int sum = 0;
    int digit;
    do
    {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    } while ( n > 0 );
    return sum;
}

int dv2(int n)
{
    if ( n % 2 == 0 )
        return 1;
    else 
        return 0;
}

int dv3(int n)
{
    if ( n % 3 == 0 )
        return 1;
    else 
        return 0;
}

int dv5(int n)
{
    if ( n % 5 == 0 )
        return 1;
    else 
        return 0;
}

int dv6(int n)
{
    if ( n % 6 == 0 )
        return 1;
    else 
        return 0;
}

int dv9(int n)
{
    if ( n % 9 == 0 )
        return 1;
    else 
        return 0;
}

int input()
{
    int n;
    printf("Nhap so: ");
    scanf("%d", &n);
    return n;
}