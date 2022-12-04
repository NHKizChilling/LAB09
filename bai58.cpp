#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double giai_thua(int n);
float emux(float x, float e);

int main()
{
    float x, e;
    system("cls");
    printf("Nhap so: ");
    scanf("%f", &x);
    printf("Nhap epsilon: ");
    scanf("%f", &e);
    printf("Ket qua la: %.4f", emux(x,e));
    return 0;
}

double giai_thua(int n)
{
    if ( n == 0 || n == 1 )
        return 1;
    else 
        return n * giai_thua(n-1);
}

float emux(float x, float e)
{
    float emux = x;
    float epsilon;
    int n = 1;
    do 
    {
        epsilon = pow(x,n) / giai_thua(n);
        emux += pow(-1, n) * epsilon;
        n++;
    } while ( fabs(epsilon) > e);
    return emux;
}