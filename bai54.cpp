#include <stdio.h>
#include <stdlib.h>

int hoanhao(int k);
int input();

int main()
{
    int n;
    int result;
    n = input();
    printf("Cac so hoan hao: \n");
    for ( int k = 1; k <= n; k++ )
    {
        result = hoanhao(k);
        if ( result == 1 )
            printf("%d ", k);
    }
    return 0;
}

int input()
{
    int n;
    system("cls");
    printf("Nhap so: ");
    scanf("%d", &n);
    return n;
}

int hoanhao(int k)
{
    int sum = 0;
    for ( int i = 1; i <= k; i++ )
    {
        if ( k % i == 0 )
            sum += i;
    }   
    if ( sum == k*2 )
        return 1;
    else 
        return 0;
}