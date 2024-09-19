#include <stdio.h>

void main(void)
{
	int x,y, z, min, dec;
	printf("请输入任意3个整数:\n");
	scanf("%d %d %d", &x, &y, &z);
	
	if (x < y) {
		min = x;
		x = y;//x大 y小
		y = min;
	}
	
	if (x < z) {
		min = x;
		x = z;//x大  z小
		z = min;
	}
	
	if (y < z)
	{
		min = y;
		y = z;
		z = min;//y大 z小
	}
	
	printf("请输入一个整数， 程序会根据正负判断输出：\n");
	scanf("%d", &dec);
	if (dec >= 0) {
		printf("最大整数为：%d\n", x);
	} else {
		printf("最小整数位：%d\n", z);
	}
}
/*
请输入任意3个整数:
1 2 3
请输入一个整数， 程序会根据正负判断输出：
2
最大整数为：3
*/