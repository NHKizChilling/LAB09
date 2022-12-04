#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float luy_thua(float x, int k);
double giai_thua(int k);
float cos(float x, float e);

int main()
{
    float x, e;
    system("cls");
    printf("Nhap so: ");
    scanf("%f", &x);
    printf("Nhap epsilon: ");
    scanf("%f", &e);
    printf("Ket qua la: %.4f", cos(x,e));
    return 0;
}

float luy_thua(float x, int k)
{
    return powf(x, float(k));
}

double giai_thua(int k)
{
    if ( k == 0 || k == 1 )
        return 1;
    else 
        return k * giai_thua(k-1);
}

float cos(float x, float e)
{
    float epsilon;
    float cosx = 1;
    int n = 1;
    do {
     epsilon = luy_thua(x, 2*n) / giai_thua(2*n);
     cosx += pow(-1, n) * epsilon;
     n++;
    } while (fabs(epsilon) > e);
    return cosx;
}