// #include <stdio.h>
// int main()
// {
//     // 初始化
//     int price=0;
//     int bill=0;
//     // 读入金额和票面
//     printf("请输入金额:");
//     scanf("%d",&price);
//     printf("请输入票面:");
//     scanf("%d",&bill);
//     // 计算找零
//     if (bill>=price){
//         int change=bill-price;
//         printf("应该找您%d元\n",change);
//     } 
//     else{
//         printf("您的钱不够。\n");
//     }
//     return 0;
// }

// 计算薪水
// #include <stdio.h>
// int main()
// {
//     const double RATE=8.25;
//     const int STANDARD=40;
//     double pay=0;
//     int hours;
//     printf("请输入工作的小时数:");
//     scanf("%d",&hours);
//     printf("\n");
//     if (hours>STANDARD)
//         {
//             pay=STANDARD*RATE+(hours-STANDARD)*(RATE*1.5);
//         }
//     else
//         {
//             pay=hours*RATE;
//         }
//     printf("应付工资:%f\n",pay);
//     return 0;
// }

// 判断成绩
#include <stdio.h>
int main()
{
    const int PASS=60;
    int score;
    printf("请输入您的成绩:");
    scanf("%d",&score);
    printf("您的成绩是:%d。\n",score);
    if (score<PASS)
        {
            printf("很遗憾,这个成绩没有及格。\n");
        }
    else
        {
            printf("祝贺你,这个成绩及格了。\n");
            printf("再见\n");
        }
    printf("");
    return 0;
}