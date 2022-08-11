#include <stdio.h>
int main()
{
    int a;
    int num=0;
    printf("请输入一个整数:");
    scanf("%d",&a);
    num++;
    a/=10;
    while (a>0)
        {
            num++;
            a/=10;
        }
    printf("%d\n",num);
    return 0;
}