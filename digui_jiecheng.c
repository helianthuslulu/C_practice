/*************************************************************************
	> File Name: digui_jiecheng.c
	> Author: helianthus_lu
	> mail: helianthus.lu@gmail.com 
	> Created Time: 2013年06月06日 星期四 20时54分41秒
 ************************************************************************/
/*这是一个关于用递归形式实现阶乘计算的小例子*/
#include <stdio.h>


int factorial(int n)
{
	int result = 1;

	while (n > 1) {
		result = result * n;
		n--;
	}
	return result;
}

int main(void) 
{
	int input, retval;

	printf("input the finger:");
	scanf("%d", &input);
	retval = factorial(input);
	printf("the factorial result is %d\n", retval);
}
