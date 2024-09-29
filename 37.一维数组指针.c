#include <stdio.h>


void inv(int *x, int n);

void main()
{
	int i;
	int array[10] = {1,3,9,11,0,8,5,6,14,98};
	printf("原始数组是：\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	inv(array, 10);
	printf("按相反次序存放后的数组为：\n");

	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void inv(int *x, int n)
{
	int *p, *i, *j;
	int temp;
	int m = (n-1)/2;

	int count;
	p = x;
	printf("测试用指向数组的指针，以数组表示\n");
	for (count = 0; count < 10; count++)
	{
		printf("%d ", p[count]);	//看来指针真的可以表示成数组的样子，
	}
	printf("\n");

	i = x;				//x[0] 	数组头
	j = x + n - 1;		//x[n-1]  x[9]   数组尾
	p = x +m;			//x[0+(n-1)/2] = X[9/2] = X[4]  数组中间值

	for ( ; i <= p; i++, j--)	//将数组头和尾部的数据互换， 用指针解引用*来修改，
	{
		temp = *i;
		*i = *j;
		*j = temp;
	}

}

/*
c语言规定制作对数组的用法
int a[10];
int *ptr;
ptr = a;

ptr+n  和a+n 都表示数组元素a[n]的地址， &a[n]
*(prt+n)和*(a+n) 表示a[n]
指向数组的指针变量， 可以用ptr[n],  和*(prt+n)是一个意思

*/

/*

cmd /k cd /d "D:\代码仓库\C语言精彩编程百例" & gcc "37.一维数组指针.c" -o "37.一维数组指针.exe" & "37.一维数组指针.exe"
Process started (PID=12376) >>>
原始数组是：
1 3 9 11 0 8 5 6 14 98
测试用指向数组的指针，以数组表示
1 3 9 11 0 8 5 6 14 98
按相反次序存放后的数组为：
98 14 6 5 8 0 11 9 3 1
*/


