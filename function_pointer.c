/*************************************************************************
	> File Name: function_pointer.c
	> Author: helianthus_lu
	> mail: helianthus.lu@gmail.com 
	> Created Time: 2013年06月07日 星期五 09时25分17秒
 ************************************************************************/
/*这是一个关于函数指针使用的例子
 *使用指针的时候，需要通过钥匙("*")来取其指向的内存里面的值，函数指针使用也是如此
 *通过(*pf)取出存在这个地址上的函数，然后调用它。这里需要注意，给函数指针赋值时，
 *可以用&fun或者直接用函数名fun。这是因为函数名被编译之后其实就是一个地址，所以这
 *里两种用法没有本质的差别。
 */
#include <stdio.h>
#include <string.h>

char *fun(char *p1, char *p2)
{
	int i = 0;
	i = strcmp(p1, p2);
	if (0 == i) 
		return p1;
	else 
		return p2;
}

int main()
{
	char *(*pf)(char *p1, char *p2);
	char * retval;
	pf = &fun;
	retval = (*pf)("aa", "bb");
	printf("the result is %s\n", retval);
	return 0;
}
