// #include <stdio.h>
// int main()
// {  
//     printf("%f\n",10/3*3.0);
//     return 0;
// }

#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d,%d", &a, &b);
	double c = (a+b)/2.0;
	printf("%d和%d的平均值=%f\n", a, b, c);
	return 0;
}