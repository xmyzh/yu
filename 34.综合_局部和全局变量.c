#include <stdio.h>

void head1();
void head2();
void head3();

int couunt;	//作用域是整个文件

void main()
{
	register int index;	//作用域是整个main

	head1();
	head2();
	head3();

	for (index=8; index > 0; index--)
	{
		int stuff;

		for (stuff=0; stuff<=6; stuff++)
		{
			printf("%d", stuff);
		}
		printf("index is now %d\n",  index);
	}
}

int g_count;	//作用域是从这个位置往下的文件

void head1()
{
	int index;	//作用域是head1

	index = 23;
	printf("The header1 value is %d\n", index);
}

void head2()
{
	int count;	//作用域是head2

	count = 53;
	printf("The headr2 value is %d\n", count);
	g_count = 77;
}

void head3()
{
	printf("The header3 value is %d\n", g_count);
}



/*
register关键字声明的变量具有局部作用域。这意味着这些变量只能在声明它们的代码块内部被访问和使用
*/

/*
Process started (PID=5884) >>>
The header1 value is 23
The headr2 value is 53
The header3 value is 77
0123456index is now 8
0123456index is now 7
0123456index is now 6
0123456index is now 5
0123456index is now 4
0123456index is now 3
0123456index is now 2
0123456index is now 1
*/


