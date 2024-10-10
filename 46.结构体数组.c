#include <stdio.h>

struct student
{
	char number[6];
	char name[6];
	int score[3];
}stu[2];//定义结构体， 声明一个数组变量

void output(struct student stu[2]);


void main()
{
	int i, j;
	for(i=0; i < 2; i++)
	{
		printf("请输入学生%d的成绩：\n", i+1);
		printf("学号： ");
		scanf("%s", stu[i].number);
		printf("姓名： ");
		scanf("%s", stu[i].name);
		for (j=0; j < 3; j++)
		{
			printf("成绩 %d\t", j+1);
			scanf("%d", &stu[i].score[j]);
		}
		printf("\n");
	}
	output(stu);
}

void output(struct student stu[2])
{
	int i, j;
	printf("学号 姓名 成绩1 成绩2 成绩3\n");

	for(i=0; i<2; i++)
	{
		printf("%-6s%-6s", stu[i].number, stu[i].name);
		for (j=0; j<3; j++)
			printf("%-8d", stu[i].score[j]);
		printf("\n");
	}
}

/*
和平时使用的数组一样， 声明数组struct stu stud[20]
使用数组  stud[0].name
*/

/*
C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\46.结构体数组.exe
请输入学生1的成绩：
学号： 1
姓名： aa
成绩 1  100
成绩 2  35
成绩 3  98

请输入学生2的成绩：
学号： 2
姓名： bb
成绩 1  60
成绩 2  70
成绩 3  98

学号 姓名 成绩1 成绩2 成绩3
1     aa    100     35      98
2     bb    60      70      98

*/


