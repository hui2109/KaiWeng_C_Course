// 计算阶乘

// 方法一
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("请输入想计算阶乘的数:");
//     scanf("%d", &n);
//     int fact=1;
//     int i=1;
//     while (i<=n)
//         {
//             fact *= i;
//             i++;
//         }
//     printf("%d!=%d\n",n,fact);
//     return 0;
// }

// 方法二
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("请输入想计算阶乘的数:");
//     scanf("%d", &n);
//     int fact=1;
//     for (int i=2;i<=n;i++)
//         {
//             fact*=i;
//         }
//     printf("%d!=%d\n",n,fact);
//     return 0;
// }

// // 方法三-倒着算
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("请输入想计算阶乘的数:");
//     scanf("%d", &n);
//     int fact=1;
//     int i=n;
//     for (;n>0;n--)
//         {
//             fact*=n;
//         }
//     printf("%d!=%d\n",i,fact);
//     return 0;
// }

// 习题测试
#include <stdio.h>
int main()
{
    int i=0;
    for (; i++<10;  )
        {
            printf("%d\n",i);
        }
    printf("%d\n",i);
    return 0;
}