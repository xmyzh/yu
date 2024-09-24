#include <stdio.h>
#include <stdlib.h>	//for atoi()
#include <ctype.h>
#include <string.h>


void main(int argc, char* argv[])
{
	int disp, count;

	if (argc < 2)
	{
		printf("必须要输入命令行个数\n");
		printf("请重新尝试\n");
		exit(1);
	}

	if (argc==3 && !strcmp(argv[2], "display"))
		disp = 1;
	else
		disp = 0;

	for (count = atoi(argv[1]); count >= 0; --count)
		if (disp)
			printf("参数%d  %s\n", count, argv[count]);
	putchar('\a');//蜂鸣器响
	printf("结束\n");
	return;
}


/*
开始运行main时, argc存放参数总个数
                argv存放字符指针组成的数组，argv[0]对于程序名称信息 之后的是用户输入的命令行，用空格隔开
				这样写会显得程序更专业
*/


/*

C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\27.命令行做参数.exe 2 display
参数2  display
参数1  2
参数0  /cygdrive/d/代码仓库/C语言精彩编程百例/27.命令行做参数
结束

*/


