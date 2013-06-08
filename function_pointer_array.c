/*************************************************************************
	> File Name: function_pointer_array.c
	> Author: helianthus_lu
	> mail: helianthus.lu@gmail.com 
	> Created Time: 2013年06月07日 星期五 11时11分39秒
 ************************************************************************/
//这是一个函数指针数组的应用示例
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
	char *(*pf[3])(char *);
	pf[0] = fun1;
	pf[1] = fun2;
	pf[2] = fun3;
	pf[0]("function pointer array\n");
	pf[0]("I like programming\n");
	pf[0]("I like spring\n");
	return 0;
}
