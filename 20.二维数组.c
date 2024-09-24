#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array[16][16];
	int i, j, k, m, n;
	
	m = 1;
	while(m == 1)
	{
		printf("请输入n 0~15，n是奇数 \n");
		scanf("%d", &n);
		
		if ((n!=0) && (n<=15) && (n%2!=0)) {
			printf("矩阵阶数是 %d\n", n);
			m = 0;
		} else {
			printf("输入的阶数不对,或者非奇数\n");
			exit(0);
		}
	}
	
	for(i=1; i<=n; i++)
		for (j=1; j<=n; j++)
			array[i][j] = 0;
		
	
	//建立魔方阵
	j = n/2 + 1;	//7  j=4 array[1][4]=1
	array[1][j] = 1;
	for (k=2; k<=n*n; k++)
	{
		i = i - 1;
		j = j + 1;
		if((i<1) && (j > n)) {
			i = i + 2;
			j = j - 1;
		} else {
			if (i < 1)
				i = n;
			if (j > n)
				j = 1;
		}
		
		if (array[i][j] == 0)
			array[i][j] = k;
		else {
			i = i + 2;
			j = j - 1;
			array[i][j] = k;
		}
	}
	
	//输出魔方阵
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
			printf("%5d", array[i][j]);
		
		printf("\n");
	}
}

/*
魔方阵，行列斜线的和都是一样的
二维数组，第一个下标表示多少行，第二个表示多少列
*/


/*


C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\20.二维数组.exe
请输入n 0~15，n是奇数
7
矩阵阶数是 7
   30   39   48    1   10   19   28
   38   47    7    9   18   27   29
   46    6    8   17   26   35   37
    5   14   16   25   34   36   45
   13   15   24   33   42   44    4
   21   23   32   41   43    3   12
   22   31   40   49    2   11   20
*/


