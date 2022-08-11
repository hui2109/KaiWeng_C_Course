#include <stdio.h>
int main()
{
    int people;
    scanf("%d",&people);
    int start=1;
    int count=0;
    int num;
    double num1 = people/2.0;
    int num2=people/2;
    if (num2<num1)
        {
            num=num2+1;
        }
    else
        {
            num=num2;
        }
    while (count<num-1)
        {
            printf("%d ",start);
            start+=2;
            count+=1;
        }
    printf("%d",start);
    return 0;
}