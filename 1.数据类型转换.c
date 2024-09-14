#include<stdio.h>

int main(void)
{
	int a = 5;
	char c = 'a';
	float f = 5.3;
	double d = 12.64;
	double result;

	//同类型数据之间运算，并输出结果
	printf("a+c=%d\n", a+c);
	printf("a+c=%c\n", a+c);
	printf("f+d=%f\n", f+d);
	/*
	a+c=102
	a+c=f
	f+d=17.940000
	*/

	//不同类型数据进行运算， 并输出结果
	printf("a+d=%f\n", a+d);
	printf("c+f=%f\n", c+f );
	/*
	a+d=17.640000
	c+f=102.300003
	*/

	//四个变量进行混合运算，并输出结果
	result = a + c + (d + f);
	printf("doule = %f\n", result);
	//doule = 119.940000
}