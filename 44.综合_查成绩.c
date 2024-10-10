#include <stdio.h>
#include <string.h>

void avsco(float *psco, float *pave);
void avcour5(char *pcos, float *psco);
void fali2(char *pcou, int *pnum, float *psco, float *pave);
void excellence(char * pcou, int *pnum, float *psco, float *pave);

void main()
{
	int i,j,*pnum, num[4];
	float score[4][5],aver[4], *psco, *pave;
	char course[5][20], *pcou;

	printf("请按行输入5门功课的名称(空格或者回车得用英文):\n");
	pcou = course[0];	//course[0] == &course[0][0]

	for(i=0; i<5; i++)
		scanf("%s", pcou+20*i);

	for(i=0; i<5; i++)
		printf(",%s", pcou+20*i);

	printf("\n");


	printf("请按下面的格式输入学生的5门功课成绩(空格隔开)：\n");
	psco = &score[0][0];

	pnum = &num[0];
	for (i=0; i < 4; i++)		//i第几个学生
	{
		printf("学号:");
		scanf("%d", pnum +i);
		printf("成绩:");
		for (j=0; j<5; j++)		//课程表的第几门课
		{
			scanf("%f", psco+(5*i)+j);//
		}

	}

	for (i=0; i < 4; i++)		//i第几个学生
	{
		printf("\n学号:");
		printf("%d", *(pnum +i));
		printf("成绩:");
		for (j=0; j<5; j++)		//课程表的第几门课
		{
			printf("%8.1f", *(psco+(5*i)+j));//
		}

	}

	pave = &aver[0];
	printf("\n\n");
	avsco(psco, pave);//每个学生平均成绩
	avcour5(pcou, psco);//每个学生的第5门课
	printf("\n\n");
	fali2(pcou, pnum, psco, pave);
	printf("\n\n");

	excellence(pcou, pnum, psco, pave);

}


void avsco(float *psco, float *pave)	//每个学生平均成绩
{
	int i, j;
	float sum, average;
	for (i=0; i<4; i++)			//学生序号，第i个学生
	{
		sum = 0.0;
		for (j=0; j < 5; j++)	//课程表， 第j门课
			sum = sum+(*(psco + (5*i)+j));//第几个学生的第几门课
		average = sum/5;
		*(pave+i) = average;	//存到aver[i]当中
	}
}

void avcour5(char *pcou, float *psco)
{
	int i;
	float sum, average5;
	sum = 0.0;
	for (i=0; i<4; i++)
		sum = sum + (*(psco +(5*i)+4));//所有学生的第5门课
	average5 = sum /4;
	printf("第5门课程%s的平均成绩为%5.2f.\n",pcou, average5);
}

void fali2(char *pcou, int *pnum, float *psco, float *pave)
{
	int i, j, k, label;
	printf("==两门以上成绩不及格的学生==\n");

	for (i=0; i<5; i++)
		printf("%-8s", pcou +20*i);
	printf(" 平均分\n");

	for (i=0; i<4; i++)
	{
		label = 0;
		for(j=0; j <5; j++)
		{
			if (*(psco+5*i+j) < 60.0)	//psco+5*i  是找某个学生， +j是看他的第j课成绩
				label++;				//分数低就标记下
		}
		if (label >=2)
		{
			printf("不及格学生学号：%-8d\n", *(pnum+i));	//打印一下不及格的学生学号， i是找到了是第几个学生， 第i个学生，和第i个码，i能找出两个数组对应的学生

			for (k=0; k<5; k++)
				printf("%-8.2f", *(psco+5*i+k));
			printf("%-8.2f\n", *(pave+i));
		}
	}
}

void excellence(char *pcou, int *pnum, float *psco, float *pave)
{
	int i, j, k, label;
	printf("==成绩优秀学生==\n");
	printf("功课：");

	for(i=0; i<5; i++)
		printf(" %-8s", pcou+20*i);

	printf(" 平均分\n");
	for(i=0; i<4; i++)
	{
		label = 0;
		for(j=0; j<5; j++)
			if (*(psco+5*i+j) >= 85.0)	//(psco+5*i) 找第几个学生的成绩
				label++;

		if ((label>=5)||(*(pnum+i)>=90))
		{
			printf("%-8d", *(pnum+i));
			for(k=0; k<5; k++)
			{
				printf("%-8.2f", *(psco+5*i+k));
			}
			printf("%-8.2f\n", *(pave+i));
		}
	}
}

/*
在函数中， 使用一维指针，来操作传进来的数组指针，就当做获得了数组首地址那样使用
psco+5*i+k   一行5个元素，这是查找第i行， 第k个元素的位置， *(psco+5*i+k)获取到元素
*/

/*

C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\44.综合_查成绩.exe
请按行输入5门功课的名称(空格或者回车得用英文):
魔法盾
魔法弹
魔法基础
魔法铠甲
魔法双击
,魔法盾,魔法弹,魔法基础,魔法铠甲,魔法双击
请按下面的格式输入学生的5门功课成绩(空格隔开)：
学号:01
成绩:10 12 13 14 15
学号:02
成绩:20 21 22 23 24
学号:03
成绩:60 61 62 63 64
学号:04
成绩:100 99 98 97 96

学号:1成绩:    10.0    12.0    13.0    14.0    15.0
学号:2成绩:    20.0    21.0    22.0    23.0    24.0
学号:3成绩:    60.0    61.0    62.0    63.0    64.0
学号:4成绩:   100.0    99.0    98.0    97.0    96.0

第5门课程魔法盾的平均成绩为49.75.


==两门以上成绩不及格的学生==
魔法盾魔法弹魔法基础魔法铠甲魔法双击 平均分
不及格学生学号：1
10.00   12.00   13.00   14.00   15.00   12.80
不及格学生学号：2
20.00   21.00   22.00   23.00   24.00   22.00


==成绩优秀学生==
功课： 魔法盾 魔法弹 魔法基础 魔法铠甲 魔法双击 平均分
4       100.00  99.00   98.00   97.00   96.00   98.00
*/


