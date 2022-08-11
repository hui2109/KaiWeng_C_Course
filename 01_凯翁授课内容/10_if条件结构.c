// #include <stdio.h>
// int main()
// {
//     int hour1,minute1;
//     int hour2,minute2;
//     scanf("%d %d",&hour1,&minute1);
//     scanf("%d %d",&hour2,&minute2);
//     int ih=hour2-hour1;
//     int im=minute2-minute1;
//     if (im<0){
//         im=60+im;
//         ih--;
//     }
//     printf("时间差是%d小时%d分钟\n",ih,im);
//     return 0;
// }

//判断优先级
#include <stdio.h>
int main()
{
    int a=4;
    int b=4;
    printf("%d\n",5>3==6>4);
    printf("%d\n",6>5>4);
    printf("%d\n",a==b==6);
    printf("%d\n",a==b>0);
    return 0;
}