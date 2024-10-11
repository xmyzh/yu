#include <stdio.h>
#include <string.h>

union data
{
	int a;
	float b;
	double c;
	char d;
}exa;



void main()
{
	exa.a = 6; printf("%d\n", exa.a);
	exa.c = 67.2; printf("%5.1f\n", exa.c);
	exa.d = 'W'; printf("exa.d=%c\n", exa.d);
	exa.b = 34.2;
	printf("exa.b=%5.1f, exa.d=%c \n", exa.b, exa.d);
}


/*
union data			//联合体变量不同类型的变量共用一片内存， i4字节 ch1字节 float8字节
{
	int i;
	char ch;
	float f;
};
union data exa;//定义联合体变量

1.联合体成员的语法和访问和结构体成员语法相同也使用.和->操作
2.这些成员公用一个double类型大小的空间，(最大的成员类型决定)，数值为最后写入的数据
*/

/*
Process started (PID=5148) >>>
6
 67.2
exa.d=W
exa.b= 34.2, exa.d=�
*/


