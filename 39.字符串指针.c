#include <stdio.h>



void main()
{
	int i;
	char a[] = "I am a student.";
	char b[20];
	char *p1, *p2;

	p1 = a;
	p2 = b;

	for (; *p1 != '\0'; p1++, p2++)//把a中的字符都赋值给b， 当遇到a的结尾事结束。
	{
		*p2 = *p1;
	}
	*p2 = '\0';//因为没复制'\0'过来， 需要我们自己手动添加一个
	printf("string a is： %s\n", a);

	printf("string b is: ");
	for (i=0; b[i]!='\0'; i++)
		printf("%c", b[i]);
	printf("\n");

}



/*
1.c语言中对字符串常量是安装字符数组处理的，内存开辟了字符数组用来存放字符串敞亮， 内存中
字符串最后加了'\0'

2. char *p = a;
只是把a的首地址或者说是（I am a student）字符串的首地址，给指针变量p
p1 p2 分别是字符串a b的首地址，
3. *p2 = *p1的作用是将字符I赋值p2所指向的数组元素
*/

/*

Process started (PID=12752) >>>
string a is： I am a student.
string b is: I am a student.

*/


