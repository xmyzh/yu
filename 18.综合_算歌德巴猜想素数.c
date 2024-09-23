#include <stdio.h>
#include <stdlib.h>  //for exit()
#include <math.h>  //for floor(num),返回不大于num的最大整数

int main()
{
	int i,j,num;
	int p, q, flagp, flagq;
	printf("在做歌德巴猜想，任意偶数可以拆分成2个素数之和\n请输入大于4的偶数：\n");
	scanf("%d", &num);

	//if
	if (((num%2)!= 0) || (num<=4)) {
		printf("input data error\n");
	} else {
		p = 1;

		//do while
		do {
			p = p + 1;
			q = num - p;
			flagp = 1;
			flagq = 1;

			//for
			for(i=2; i <=(int)(floor(sqrt((double)(p)))); i++)
			{
				if ((p%i) == 0)
				{
					flagp = 0;
					break;
				}
			}

			//while
			j = 2;
			while(j <=(int)(floor(sqrt((double)(q)))) )
			{
				if ((q%j) == 0)
				{
					flagq = 0;
					break;
				}
				j++;
			}
		}while(flagp*flagq == 0);
		printf("%d=%d+%d\n", num, p, q);
	}
}
/*

在做歌德巴猜想，任意偶数可以拆分成2个素数之和
请输入大于4的偶数：86
86=3+83
*/


