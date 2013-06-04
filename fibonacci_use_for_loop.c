/*************************************************************************
	> File Name: fibonacci_use_for_loop.c
	> Author: helianthus_lu
	> mail: helianthus.lu@gmail.com 
	> Created Time: 2013年06月04日 星期二 17时23分29秒
 ************************************************************************/
/* Fibonacci Series C laguage */
#include <stdio.h>

int main(void)
{
	int c = 0, first = 0, second = 1, n, result;

	printf("input the number of terms:");
	scanf("%d", &n);
	printf("First %d terms of fibonacci series are :\n", n);

	for (c = 0; c < n; c++) {
		if (n <= 1)
			result = 0;
		else {
			result = first + second;
			first = second;
			second = result;
		}
		printf("the result of terms fibonacci is %d\n", result);
	}
	return 0;
}
