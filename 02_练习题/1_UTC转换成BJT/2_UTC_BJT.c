#include <stdio.h>
int main()
{
    int time;
    scanf("%d",&time);
    int min=time%100;
    int mid=time%10000;
    int hour=(mid-min)/100;
    int hour_new;
    if (hour<=7)
        {
            hour_new=24+(hour-8);
        }
    else
        {
            hour_new=hour-8;
        }
    int output=hour_new*100+min;
    printf("%d",output);
}