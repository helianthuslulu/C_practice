/*************************************************************************
	> File Name: di_gui1.c
	> Author: helianthus_lu
	> mail: helianthus.lu@gmail.com 
	> Created Time: 2013年05月30日 星期四 23时04分22秒
 ************************************************************************/
//功能：将二进制整数转换为字符
//程序还有点问题
#include <stdio.h>

void 
binary_to_ascii(unsigned int value);

int
main(void)
{	
	unsigned int input;

	printf("input number:");
	scanf("%d", &input);

	binary_to_ascii(input);
	return 0;
}

void 
binary_to_ascii(unsigned int value)
{
	unsigned int quotient;

	quotient = value / 10;
	if (quotient != 0)
		binary_to_ascii(quotient);

	putchar(value % 10);
//	printf("the result is %c", value % 10 + '0');
}
