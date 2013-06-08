/*************************************************************************
	> File Name: odd_or_even.c
	> Author: helianthus_lu
	> mail: helianthus.lu@gmail.com 
	> Created Time: 2013年06月06日 星期四 23时16分39秒
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int n;

	printf("input the finger:");
	scanf("%d", &n);

	n % 2 == 0 ? printf("Even\n") : printf("Odd\n");

	return 0;
}
