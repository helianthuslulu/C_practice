/*************************************************************************
	> File Name: die_dai.c
	> Author: helianthus_lu
	> mail: helianthus.lu@gmail.com 
	> Created Time: 2013年06月03日 星期一 23时07分52秒
 ************************************************************************/
/*
 *fibonacci数列的迭代实现法
 *参考：http://www.programmingsimplified.com/c-program-generate-fibonacci-series
 *这是一个非常好的学习C语言的国外网站
 * */
#include <stdio.h>

int fibonacci(int n) 
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) 
{
	int in, c, i = 0;
	printf("input the finger:");
	scanf("%d", &in);
	printf("\n");
	
	for (c = 0; c <=in; c++) {
		printf("retval = %d\n", fibonacci(i));
		i++;
	}

	return 0;
}
