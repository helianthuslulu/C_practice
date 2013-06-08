/*************************************************************************
	> File Name: function_pointer_array_pointer.c
	> Author: helianthus_lu
	> mail: helianthus.lu@gmail.com 
	> Created Time: 2013年06月07日 星期五 11时31分39秒
 ************************************************************************/
//这是一个关于函数指针数组的指针的示例
#include <stdio.h>

char *fun1(char *p)
{
	printf("%s\n", p);
	return p;
}
char *fun2(char *p)
{
	printf("%s\n", p);
	return p;
}
char *fun3(char *p)
{
	printf("%s\n", p);
	return p;
}

int main(void)
{
	char *(*a[3])(char *p);
	char *(*(*pf)[3])(char *p);
	pf = &a;
	a[0] = fun1;
	a[1] = fun2;
	a[2] = fun3;
	pf[0][0]("fun1");
	pf[0][1]("fun2");
	pf[0][2]("fun3");
	return 0;
}

