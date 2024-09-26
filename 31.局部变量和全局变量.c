#include <stdio.h>

int count;
void func1();
void func2();

void main()
{
	count = 100;
	printf("at main 全局count is %d\n", count);

	func1();
}

int mid_value = 100;
void func1()
{
	int temp;
	temp = count;
	printf("at func1() 全局count is %d\n", count);
	func2();
	printf("back to func1() 全局count is %d\n\n", count);
	func2();
}

void func2()
{
	int count ;
	for(count = 1; count < 20; count++)
	{
		printf("at func2() 临时count is %d\n", count);
	}
	printf("\n");
}




/*
1.主函数main定义的变量，只在主函数有效，
2.不同函数重点变量可以起相同的名字， 他们互不干扰
3.形式参数，也属于局部变量
4.在函数的内部， 可以在复合语句中定义变量，这些变量也只能在本复合语句中有效， {{int,x,y;}} 只在里面的{}有效
5.全局变量在文件的开头定义， 整个文件都能使用它， 如果不是在开头部分定义， 则只能从定义它的那个点到文件终止为止可以使用。
6.全局变量和局部变量同名， 则局部变量起作用
*/

/*
at main 全局count is 100
at func1() 全局count is 100
at func2() 临时count is 1
at func2() 临时count is 2
at func2() 临时count is 3
at func2() 临时count is 4
at func2() 临时count is 5
at func2() 临时count is 6
at func2() 临时count is 7
at func2() 临时count is 8
at func2() 临时count is 9
at func2() 临时count is 10
at func2() 临时count is 11
at func2() 临时count is 12
at func2() 临时count is 13
at func2() 临时count is 14
at func2() 临时count is 15
at func2() 临时count is 16
at func2() 临时count is 17
at func2() 临时count is 18
at func2() 临时count is 19

back to func1() 全局count is 100

at func2() 临时count is 1
at func2() 临时count is 2
at func2() 临时count is 3
at func2() 临时count is 4
at func2() 临时count is 5
at func2() 临时count is 6
at func2() 临时count is 7
at func2() 临时count is 8
at func2() 临时count is 9
at func2() 临时count is 10
at func2() 临时count is 11
at func2() 临时count is 12
at func2() 临时count is 13
at func2() 临时count is 14
at func2() 临时count is 15
at func2() 临时count is 16
at func2() 临时count is 17
at func2() 临时count is 18
at func2() 临时count is 19
*/


