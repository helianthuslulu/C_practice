/*************************************************************************
	> File Name: fibonacci_digui.c
	> Author: helianthus_lu
	> mail: helianthus.lu@gmail.com 
	> Created Time: 2013年06月06日 星期四 20时20分58秒
 ************************************************************************/
/*本例是用递归计算fibonacci数
 *
 *这个函数中用循环的形式来实现fibonacci数的计算
 *可能形式不如递归形式更符合fibonacci数的抽象定义
 *但效率却比递归形式的要高很多
 * */
#include <stdio.h>


int fibonacci(int n)
{
	int result;
	int previous_result;
	int next_older_result;

	result = previous_result = 1;

	while (n > 2) {
		n -= 1;
		next_older_result = previous_result;
		previous_result = result;
		result = previous_result + next_older_result;
	}
	return result;
}

int main(void) 
{
	int in;
	int out;

	printf("input the fingers:");
	scanf("%d", &in);
	out = fibonacci(in);
	printf("the return value is %d\n", out);
}
