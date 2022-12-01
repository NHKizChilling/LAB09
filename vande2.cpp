#include <stdio.h>
#include <stdlib.h>

float BMI(float h, float m);
void tinh_trang(float bmi);

int main()
{
    float h, m, bmi;
    do 
    {
        system("cls");
        printf("Nhap chieu cao: ");
        scanf("%f", &h);
        printf("Nhap can nang: ");
        scanf("%f", &m);
    } while ( h < 0 || m < 0 );
    bmi = BMI(h,m);
    printf("BMI: %.2f\n", bmi);
    tinh_trang(bmi);
    return 0;
}

float BMI(float h, float m)
{
    return m / ( h * h );
}

void tinh_trang(float bmi)
{
    if ( bmi < 18.5 )
        printf("Thieu can");
    else if ( bmi >= 18.5 && bmi <= 22.99 )
        printf("Binh thuong");
    else if ( bmi >= 23 && bmi <= 24.99 )
        printf("Thua can");
    else 
        printf("Beo phi");
}
