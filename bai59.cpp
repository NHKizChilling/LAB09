#include <stdio.h>
#include <stdlib.h>

int input();
void process();
int actual_income(int total_income);
void output1(int total_income, int actual__income);
void _sum_income(int *sum_income, int actual_income);
int tax(int total_income);
void _sum_tax(int *sum_tax, int taxes);
void output2(int *sum_income, int *sum_tax, int count);

int main()
{
    process();
    return 0;
}

void process()
{
    int total_income;
    int actual__income;
    int taxes;
    int n = 1;
    int z = 0, l = 0;
    int *sum_income = &z;
    int *sum_tax = &l;
    int count = 0; 
    system("cls");
    do
    {
        total_income = input();
        if ( total_income == 0 )
            break;
        count++;
        actual__income = actual_income(total_income);
        taxes = tax(total_income);
        output1(total_income, actual__income);
        _sum_income(sum_income, actual__income);
        _sum_tax(sum_tax, taxes);
    } while ( n != 0 );
    output2(sum_income, sum_tax, count);
}

int input()
{
    int input;
    do
    {
        printf("\nINPUT TOTAL INCOME(<50000000):\n");
        scanf("%d", &input);
    } while ( input < 0 || input > 50000000 );
    return input;
}

int actual_income(int total_income)
{
    if ( total_income > 0 && total_income <= 9000000 )
        return total_income;
    else if ( total_income > 9000000 && total_income <= 20000000 )
        return total_income - (( total_income - 9000000) * 0.25);
    else if ( total_income > 20000000 && total_income <= 50000000 )
        return total_income - (( total_income - 20000000) * 0.4);
    else 
        return 0;
}

void output1( int total_income, int actual__income) 
{
    printf("\nTOTAL INCOME          ACTUAL INCOME\n" );
    printf("%d              %d", total_income, actual__income);
}

void _sum_income(int *sum_income, int actual_income)
{
    *sum_income += actual_income;
}

int tax(int total_income)
{
    if ( total_income > 0 && total_income <= 9000000 )
        return 0;
    else if ( total_income > 9000000 && total_income <= 20000000 )
        return ( total_income - 9000000 ) * 0.25;
    else if ( total_income > 20000000 && total_income <= 50000000 )
        return ( total_income - 20000000 ) * 0.4;
    else 
        return 0;
}

void _sum_tax(int *sum_tax, int tax)
{
    *sum_tax += tax;
}

void output2(int *sum_income, int *sum_tax, int count)
{
    printf("AVERAGE ACTUAL INCOME: %d", *sum_income/ count);
    printf("\nAVERAGE TAX: %d", *sum_tax / count);
}
