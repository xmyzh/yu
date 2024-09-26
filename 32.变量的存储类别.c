#include <stdio.h>

int sum_day(int month, int day);
int leap(int year);

void main()
{
	int year, month, day;
	int days;

	printf("请输入日期（年，月，日）");
	scanf("%d,%d,%d", &year, &month, &day);
	days = sum_day(month, day);
	if (leap(year) && month >=3) {
		days = days + 1;
		printf("%年是闰年\n", year);
	}

	printf("是该年的第%d天\n", days);
}

//定义静态存储变量，并赋初值
static int day_tab[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int sum_day(int month, int day)
{
	int i;
	for (i=1; i < month; i++)
	{
		day = day + day_tab[i];
	}
	return day;
}

//判断是否为闰年 （能够同时被4和100整除， 或者能被400整除）
int leap(int year)
{
	int leap;
	leap = (year%4==0 && year%100==0)||(year%400==0);
	return leap;
}


/*
静态存储变量 前面会加static ,   定义和初始化在程序编译时进行。  当作为局部变量，调用函数结束是，静态存储变量不会消失还会保留原值，
动态存储变量，前面有auto，可以省略不写，可以是函数的形参，局部变量，函数调用是的现场保护和返回地址， 在函数结束是会是否存储空间，
*/

/*
C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\32.变量的存储类别.exe
请输入日期（年，月，日）2024,9,26
是该年的第269天
*/


