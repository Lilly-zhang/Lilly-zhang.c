#include <stdio.h>
struct count_day
{
    int year;
    int month;
    int day;
} dd={2018, 3, 28};
int main()
{
    int i, m[12], sum;
    for (i=0; i<6; i++)
        i<=3 ? m[2*i]=31, m[2*i+1]=30 : m[2*i+1]=31, m[2*i+2]=30;
    (!(dd.year%4)&&dd.year%100!=0)||!(dd.year%400) ? m[1]=29 : m[1]=28;
    for (i=0, sum=0; i<dd.month-1; sum+=m[i++]);
    printf("%d-%d-%d is No.%d days!\n", dd.year, dd.month, dd.day, sum+dd.day);
    return 0;
}

