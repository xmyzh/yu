#include <stdio.h>
#include <stdlib.h>

int main()
{
	int select;
	int i, j;
	int score[5][7];

	int average = 0;
	int sum = 0;
	do {
		printf("本程序有4 项功能: \n");
		printf("1.根据学号查询学生成绩\n");
		printf("2.根据考试号统计成绩\n");
		printf("3.根据考试和和学号查询成绩 \n");
		printf("4.成绩录入\n");
		printf("0.退出\n");
		printf("请输入选择(0-4): ");
		scanf("%d", &select);

		switch(select)
		{
		case 0:
			printf("exit OK\n");
			exit(0);
			break;
		case 1://其实就是打印一遍二维数组的某一行
			printf("输入学号：");
			scanf("%d", &i);
			for (j=1; j <7; j++)
			{
				printf("第%d科成绩是%d\n", j, score[i][j]);
				sum += score[i][j];
			}

			average = sum/6;
			printf("学生的平均成绩是%d\n\n", average);
			break;
		case 2:
			printf("输入考试号：");
			scanf("%d", &j);
			for(i=1; i<5; i++)
			{
				printf("第%d号考生，本科成绩为：%d\n", i, score[i][j]);
				sum += score[i][j];
			}
			average = sum/4;
			break;
		case 3:
			printf("输入学号和考试科目号：");
			scanf("%d %d", &i, &j);
			printf("第%d号考生的第%d科考试成绩为%d\n", i, j, score[i][j]);
			break;
		case 4:
			printf("输入所有学生成绩\n\n");
			for(i=1; i<5; i++)
			{
				for(j=1; j<7; j++)
				{
					printf("请输入%d号学生的第%d科考试成绩: ",i,j);
					scanf("%d", &score[i][j]);

				}
			}
			break;
		default:
			break;
		}
	} while(1);
}

/*
//制作了一个成绩查询系统，用id查学习

*/


/*
C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\23.数组应用.exe
本程序有4 项功能:
1.根据学号查询学生成绩
2.根据考试号统计成绩
3.根据考试和和学号查询成绩
4.成绩录入
0.退出
请输入选择(0-4): 4
输入所有学生成绩

请输入1号学生的第1科考试成绩: 1
请输入1号学生的第2科考试成绩: 2
请输入1号学生的第3科考试成绩: 3
请输入1号学生的第4科考试成绩: 4
请输入1号学生的第5科考试成绩: 5
请输入1号学生的第6科考试成绩: 6
请输入2号学生的第1科考试成绩: 11
请输入2号学生的第2科考试成绩: 12
请输入2号学生的第3科考试成绩: 13
请输入2号学生的第4科考试成绩: 14
请输入2号学生的第5科考试成绩: 15
请输入2号学生的第6科考试成绩: 16
请输入3号学生的第1科考试成绩: 21
请输入3号学生的第2科考试成绩: 22
请输入3号学生的第3科考试成绩: 23
请输入3号学生的第4科考试成绩: 24
请输入3号学生的第5科考试成绩: 25
请输入3号学生的第6科考试成绩: 26
请输入4号学生的第1科考试成绩: 31
请输入4号学生的第2科考试成绩: 32
请输入4号学生的第3科考试成绩: 33
请输入4号学生的第4科考试成绩: 34
请输入4号学生的第5科考试成绩: 35
请输入4号学生的第6科考试成绩: 36
本程序有4 项功能:
1.根据学号查询学生成绩
2.根据考试号统计成绩
3.根据考试和和学号查询成绩
4.成绩录入
0.退出
请输入选择(0-4): 1
输入学号：1
第1科成绩是1
第2科成绩是2
第3科成绩是3
第4科成绩是4
第5科成绩是5
第6科成绩是6
学生的平均成绩是3

本程序有4 项功能:
1.根据学号查询学生成绩
2.根据考试号统计成绩
3.根据考试和和学号查询成绩
4.成绩录入
0.退出
请输入选择(0-4): 2
输入考试号：3
第1号考生，本科成绩为：3
第2号考生，本科成绩为：13
第3号考生，本科成绩为：23
第4号考生，本科成绩为：33
本程序有4 项功能:
1.根据学号查询学生成绩
2.根据考试号统计成绩
3.根据考试和和学号查询成绩
4.成绩录入
0.退出
请输入选择(0-4): 3
输入学号和考试科目号：3 4
第3号考生的第4科考试成绩为24
本程序有4 项功能:
1.根据学号查询学生成绩
2.根据考试号统计成绩
3.根据考试和和学号查询成绩
4.成绩录入
0.退出
请输入选择(0-4):
*/


