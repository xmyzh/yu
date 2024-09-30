#include <stdio.h>
#include <string.h>

void check(char *a, char  *b, int (*cmp)(const char *, const char *));

void main()
{
	char s1[80];
	char s2[80];
	int (*p)(const char *, const char *);	//定义一个函数指针

	p = strcmp;		//给函数指针赋值时， 不用给出参数， strcmp是string.h的库函数
	printf("请输入2个字符串：\n");
	gets(s1);		//输入字符串1
	gets(s2);		//输入字符串2

	check(s1, s2, p);//还能这样用函数， 第一次见识，让函数调用库函数，传参传库函数下去，p为库函数strcmp
}

void check(char *a, char *b, int(*cmp)(const char *, const char *))
{
	printf("测试是否相等\n");
	if (!(*cmp)(a,b))
		printf("结果：相等\n");
	else
		printf("结果：不相等\n");
}

/*
1.指向函数的指针变量的一般定位位   数据类型 (*指针变量名)();
2.通过函数名调用函数， 也可以通过函数指针调用
3.(*point)()表示定义一个指向函数的指针变量， 它不是固定指向隔阂函数，而是存放函数入口的地址，可以指向不同的函数
4.给函数指针赋值时， 不用给出参数
如p = strcmp
5.函数指针变量调用函数时， 直接p()来调用函数
5.函数指针变量 p+n p++ p--都是无效的

*/

/*

C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\40.函数指针.exe
请输入2个字符串：
你好啊，我是谁？
皮卡丘!
测试是否相等
结果：不相等
*/


