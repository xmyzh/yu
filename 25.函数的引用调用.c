#include <stdio.h>

void swap(int *x, int *y);

int main()
{
	int i, j;

	i = 81;
	j = 72;

	printf("i和j交换之前，i=%d,j=%d\n", i, j);

	swap(&i, &j);

	printf("i和j交换之后，i=%d,j=%d\n", i, j);

}

void swap(int *x, int *y)
{
	int temp;

	temp = *x;	//取出x，y指针地址存储的变量值，  xy交换
	*x = *y;	//
	*y = temp;	//
}

/*
 1主函数中传给被调函数的为实参
 2函数定义的参数列表内容为形参。
 3函数调用时，实参只是给形参传值，被调函数无法改变实参的值
 4.这里使用&i &j取变量的地址，这样x y地址被当做实参传递给了swap函数
 在swap函数的形参，，通过指针操作，*访问到了main函数的实参，将数据进行修改。


*/


/*
i和j交换之前，i=81,j=72
i和j交换之后，i=72,j=81
*/


