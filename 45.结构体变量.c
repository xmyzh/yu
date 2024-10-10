#include <stdio.h>

struct
{
	int year;
	int month;
	int day;
}data;	//定义一个结构并声明对象为data


void main()
{
	int days;
	printf("请输入日期（年,月,日）");
	scanf("%d, %d, %d", &data.year, &data.month, &data.day);

	switch(data.month)
	{
	case 1: days = data.day;
		break;
	case 2: days = data.day+31;
		break;
	case 3: days = data.day+59;
		break;
	case 4: days = data.day+90;
		break;
	case 5: days = data.day+120;
		break;
	case 6: days = data.day+151;
		break;
	case 7: days = data.day+181;
		break;
	case 8: days = data.day+212;
		break;
	case 9: days = data.day+243;
		break;
	case 10: days = data.day+273;
		break;
	case 11: days = data.day+304;
		break;
	case 12: days = data.day+334;
		break;
	}

	if (data.year%4==0 && data.year%100!=0 || data.year%400==0)
		if(data.month>=3)
			days = days + 1;
	printf("%d月%d日是第%d年的第%d天",data.month, data.day, data.year, days);
}

/*
1.结构体定义的结尾必须用分号， 表示c语句
2.创建结构体类型时,可以不写结构体名，
struct{
	int day;
	int month
}time;
3.引用结构体成员，使用"."  time.day;
*/

/*

C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\45.结构体变量.exe
请输入日期（年,月,日）2024,10,10
10月10日是第2024年的第284天
C:\Users\Administrator>
*/


