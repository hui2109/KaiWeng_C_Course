// #include <stdio.h>
// int main()
// {
//     int total=5;
//     total+=1;
//     printf("%d\n",total);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a=6;
    int b=a++;
    printf("%d,%d\n",b,a);

    int c=6;
    int d=++c;
    printf("%d,%d\n",d,c);
    return 0;
}