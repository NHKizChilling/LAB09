#include <stdio.h>
#include <stdlib.h>

float max(float arr[], int n);
float min(float arr[], int n);
float input();

int main()
{
    int n;
    float arr[1000];
    char c;
    float _max, _min;
    system("cls");
    printf("Nhap so luong so se nhap: ");
    scanf("%d", &n);
    printf("Nhap so: ");
    for ( int i = 0; i < n; i++ )
    {
        scanf("%f", &arr[i]);
    }
    printf("So lon nhat trong cac so da nhap: %.2f\n", max(arr, n));
    printf("So be nhat trong cac so da nhap: %.2f", min(arr, n));
    return 0;
}


float max(float arr[], int n)
{
    float max = arr[0];
    for ( int i = 1; i < n; i++ )
    {
        if ( arr[i] > max )
            max = arr[i];
    }
    return max;
}
float min(float arr[], int n)
{
    float min = arr[0];
    for ( int i = 1; i < n; i++ )
    {
        if ( arr[i] < min )
            min = arr[i];
    }
    return min;
}