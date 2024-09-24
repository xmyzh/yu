#include <stdio.h>

int main()
{
	int i, j, min, temp;
	//定义一个整形一维数组

	int array[10];
	//输入数据
	printf("Please input ten integer: \n");
	for (i=0; i <10; i++)
	{
		printf("array[%d] ", i);
		scanf("%d", &array[i]);
	}

	printf("the array is: ");
	for (i = 0; i < 10; i++)
		printf("%d ", array[i]);
	printf("\n");

	//排序
	for (i=0; i < 9; i++)
	{
		min = i;
		for (j=i+1; j < 10; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		//最小数值存到前面，
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}

	//输出
	printf("\n The result:\n");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

/*
	一维数组，int array[10];
	int 表示数组元素类型是int ，
	10	表示有10个int类型的元素
	数组总字节数 = 10*sizeof(int)
	
	array[0] 所有数组都把0作为首元素的下标。
*/


/*


Please input ten integer:
array[0] 76
array[1] 46
array[2] 12
array[3] 35
array[4] 4
array[5] 97
array[6] 1
array[7] 5
array[8] 3
array[9] 7
the array is: 76 46 12 35 4 97 1 5 3 7

 The result:
1 3 4 5 7 12 35 46 76 97
*/


