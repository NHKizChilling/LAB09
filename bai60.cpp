#include <stdio.h>
#include <stdlib.h>

int entry_time();
void process();
int exit_time();
int time_calc(int entry, int exit);
int money_calc(int hours);
void output(int count, int sum_time, int sum_fee);

int main()
{
    system("cls");
    process();
    return 0;
}

void process()
{
    int entry;
    int exit;
    int hours;
    int n = 1;
    int count = 0;
    int fee;
    int sum_fee = 0;
    int sum_time = 0;
    do
    {
        entry = entry_time();
        if ( entry == 0 )
            break;
        exit = exit_time();
        count++;
        hours = time_calc(entry, exit);
        fee = money_calc(hours);
        sum_fee += fee;
        sum_time += hours;
    } while ( n != 0 );
    output(count, sum_time, sum_fee);
}

int entry_time()
{
    int h,m;
    printf("===Entry time===\n");
    printf("Enter time: \n");
    scanf("%d", &h);
    printf("Enter min: \n");
    scanf("%d", &m);
    if ( m > 0 )
        return h+1;
    else 
        return h;
}

int exit_time()
{
    int h,m;
    printf("===Exit time===\n");
    printf("Enter time: \n");
    scanf("%d", &h);
    printf("Enter min: \n");
    scanf("%d", &m);
    if ( m > 0 )
        return h+1;
    else 
        return h;
}

int time_calc(int entry, int exit)
{
    if ( exit > entry )
        return exit - entry;
    if ( exit < entry )
        return ( 24 - entry ) + exit;
}

void output(int count, int sum_time, int sum_fee)
{
    printf("Total vehicles: %d\n", count);
    printf("Total time: %d\n", sum_time);
    printf("Total fee: %d\n", sum_fee);
    printf("Average time: %.2f\n", float(sum_time/count));
    printf("Average fee: %.2f", float(sum_fee/count));
}

int money_calc(int hours)
{
    if (hours > 0 && hours <= 4)
        return 2000*hours;
    if ( hours >= 5 && hours <= 7 )
        return ( hours - 4 ) * 1000 + 8000;
    if ( hours >= 8 && hours <= 24 )
        return ( hours - 7 ) * 5000 + 11000;
}
