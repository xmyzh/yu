#include <stdio.h>

#define N 3

//转置函数声明
void convert(int element[N][N]);

int main()
{
	int array[N][N];
	int i, j;

	printf("输入数组元素: \n");
	for (i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}

	printf("\n 数组是: \n");

	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("%5d", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//数值转置
	convert(array);
	printf("转置数组为：\n");

	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("%5d", array[i][j]);
		}
		printf("\n");
	}
}

void convert(int element[N][N])
{
	int i, j , temp;
	for(i=0; i<N; i++)
	{
		for(j=i+1; j<N; j++)
		{
			temp = element[i][j];
			element[i][j] = element[j][i];
			element[j][i] = temp;
		}
	}
}

/*
数组作为参数， 如果只是传数组元素，那就影响不到实参
			   如果用数组名作为实参比如conver(array),那函数对形参的修改也会改动到main函数中的实参，

			   主函数和被调用函数都用到了数组， 这两个地方都要定义数组，
			   实参和形参类型应该一样。
			   实参数组的大小和形参数组的大小可以不一样， 因为c语言不检查， 最好传个数组大小到函数例

*/


/*

输入数组元素:
1
2
3
4
5
6
7
8
9
 数组是:
    1    2    3
    4    5    6
    7    8    9

转置数组为：
    1    4    7
    2    5    8
    3    6    9
*/


