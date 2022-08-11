// // 案例1
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
//     return 0;
// }

// 案例2
#include <stdio.h>
int main()
{
    const int MINOR=35;
    int age=0;
    printf("请输入您的年龄:");
    scanf("%d",&age);
    printf("您的年龄是%d岁。\n",age);
    if (age<=MINOR){
        printf("年轻是美好的，");
    }
    printf("年龄决定了你的精神世界，好好珍惜吧。\n");
    return 0;
}