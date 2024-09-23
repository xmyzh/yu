#include <stdio.h>


int main()
{
	int x,y,num1,num2, temp;

	printf("请输入两个整数：\n");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	x = num1;//x大
	y = num2;//y小

	while(y != 0)
	{
		temp = x % y;
		x = y;
		y = temp;
	}

	printf("他们的最大公约数为：%d\n", x);
	printf("他们的最小公倍数为：%d\n", num1* num2/x);

}

/*
33 66
请输入两个整数：
他们的最大公约数为：33
他们的最小公倍数为：66

while(条件)，statement
1.循环体包含一个以上的雨具， 要用花括号， 没使用的话，使用范围，就是while后的第一个分号处
*/