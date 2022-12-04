#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double giai_thua(int n);
float sinx(float x, float e);

int main()
{
    float x, e;
    system("cls");
    printf("Nhap so: ");
    scanf("%f", &x);
    printf("Nhap epsilon: ");
    scanf("%f", &e);
    printf("Ket qua la: %.4f", sinx(x,e));
    return 0;
}

double giai_thua(int n)
{
    if ( n == 0 || n == 1 )
        return 1;
    else 
        return n * giai_thua(n-1);
}

float sinx(float x, float e)
{
    float sinx = x;
    float epsilon;
    int n = 1;
    do 
    {
        epsilon = pow(x, 2*n+1) / giai_thua(2*n+1);
        sinx += pow(-1, n) * epsilon;
        n++;
    } while ( fabs(epsilon) > e);
    return sinx;
}