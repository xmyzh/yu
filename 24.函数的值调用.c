#include <stdio.h>
#include <stdlib.h>

int square(int x);
int cube(int y);

int main()
{
	int m = 12;
	int n = 4;

	printf("%d %d\n", square(m), m);
	printf("%d %d\n", cube(n), n);

}

int square(int x)
{
	x = x*x;
	return x;
}

int cube(int y)
{
	y = y*y*y;
	return y;
}

/*
 1主函数中传给被调函数的为实参
 2函数定义的参数列表内容为形参。
 3函数调用时，实参只是给形参传值，被调函数无法改变实参的值



*/


/*
144 12   x=x*x 后， main函数的m还是12
64 4     y=y*y*y后， main函数的y还是4
*/


