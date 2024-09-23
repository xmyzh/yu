#include <stdio.h>
#include <stdlib.h>  //for exit()

int main()
{
	int month;
	int day;

	printf("please input the month number: ");
	scanf("%d", &month);

	switch(month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		day = 31;
		break;
	case 2:
		day = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		day = 30;
		break;
	default:
		printf("输入的参数非1~12");
		exit(0);
	}
	printf("month %d has %d days.\n", month, day);


}
/*
	exit()会跳出整个程序
	参数0   表示正常结束
	参数非0 表示一次借宿
*/


/*

please input the month number:
13
输入的参数非1~12


please input the month number:
8
month 8 has 31 days.
*/
