#include <stdio.h>


int main() {
	int i, j , k;

	printf("忍法：墨镜冰晶，千杀水翔\n");
	for (i = 0; i <=4; i++)
	{
		for(j = 0; j <=3-i; j++)
			printf(" ");

		for(k=0; k<=2*i; k++)
			printf("*");
		printf("\n");
	}

	for (i=0; i <= 3; i++)
	{
		for(j =0; j <= i; j++)
		{
			printf(" ");
		}
		
		for (k=0; k<=6-2*i; k++)
			printf("*");
		printf("\n");
	}
}

/*
墨镜冰晶，千杀水翔
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *


for （1;2;3）
1.控制变量初始化
2.循环条件
3.控制变量更新
*/