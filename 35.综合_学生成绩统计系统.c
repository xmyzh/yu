#include <stdio.h>


#define N 6
#define M 5

float score[N][M];
float a_stu[N], a_cor[M];

void input_stu();
void avr_stu();
void avr_cor();
float highest(int * r, int *c);
float s_diff();

void main()
{
	int i, j, r, c;
	float h;
	r = 0;
	c = 1;

	input_stu();	//输入学生各门功课成绩
	avr_stu();		//调用avr_stu， 求每个学生平均分
	avr_cor();		//求学生成绩的最高分
	printf("\n序号    课程1    课程2    课程3    课程4    课程5    所有课平均分");
	for (i=0; i < N; i++)
	{
		printf("\n NO%2d", i+1);
		for (j=0; j <M; j++)
			printf("%8.2f", score[i][j]);
		printf("%8.2f", a_stu[i]);
	}

	printf("\n单科平均分");
	for (j=0; j < M; j++)
	{
		printf("%8.2f", a_cor[j]);
	}
	h = highest(&r, &c);
	printf("\n\n最高分%8.2f是 %d号学生的第%d门课\n", h, r, c);
	printf(" 方差 %8.2f\n", s_diff());
}

void input_stu()	//输入学生成绩
{
	int i, j;
	for(i=0; i < N; i++)
	{
		printf("请输入学生%2d的5个成绩（空格隔开）:\n", i+1);
		for (j = 0; j < M; j++)
			scanf("%f", &score[i][j]);
	}
	printf("成绩已经输入\n");
}

void avr_stu()	//计算N个学生的平均成绩
{
	int i, j;
	float s;
	for (i = 0; i < N; i++)
	{
		s = 0;
		for (j=0; j < M; j++)	//得把这个学生的所有科目加起来
			s = s+ score[i][j];
		a_stu[i] = s/M;
	}
	printf("已经算好每个学生，平均分成绩\n");

}

void avr_cor()		//计算单科的平均分
{
	int i, j;
	float s;
	for (j = 0; j < M; j++)
	{
		s = 0;
		for (i = 0; i < N; i++)	//得把所有参加这科考试的学生成绩加起来
		{
			s = s + score[i][j];
		}
		a_cor[j] = s/(float)N;
	}
}

float highest(int *r, int *c)
{
		float high;
		int i, j;
		high = score[0][0];
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
			{
				if (score[i][j] > high)
				{
					high = score[i][j];
					*r = i +1;
					*c = j +1;
				}
			}
		}
		printf("\n已找到最高分\n");
		return high;
}

float s_diff()
{
	int i;
	float sumx,  sumxn;
	sumx = 0.0;
	sumxn = 0.0;
	for(i=0; i < N; i++)
	{
		sumx = sumx + a_stu[i] * a_stu[i];
		sumxn = sumxn +a_stu[i];
	}

	return (sumx /N - (sumxn/N) * (sumxn/N));
}

/*
register关键字声明的变量具有局部作用域。这意味着这些变量只能在声明它们的代码块内部被访问和使用
*/

/*

C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\35.综合_学生成绩统计系统.exe
请输入学生 1的5个成绩（空格隔开）:
77 55 88 99 33
请输入学生 2的5个成绩（空格隔开）:
44 55 66 11 22
请输入学生 3的5个成绩（空格隔开）:
15 56 72 85 11
请输入学生 4的5个成绩（空格隔开）:
34 52 67 85 11
请输入学生 5的5个成绩（空格隔开）:
63 54 62 63 75
请输入学生 6的5个成绩（空格隔开）:
54 12 52 63 98
成绩已经输入
已经算好每个学生，平均分成绩

序号    课程1    课程2    课程3    课程4    课程5    所有课平均分
 NO 1   77.00   55.00   88.00   99.00   33.00   70.40
 NO 2   44.00   55.00   66.00   11.00   22.00   39.60
 NO 3   15.00   56.00   72.00   85.00   11.00   47.80
 NO 4   34.00   52.00   67.00   85.00   11.00   49.80
 NO 5   63.00   54.00   62.00   63.00   75.00   63.40
 NO 6   54.00   12.00   52.00   63.00   98.00   55.80
单科平均分   47.83   47.33   67.83   67.67   41.67
已找到最高分


最高分   99.00是 1号学生的第4门课
 方差   103.78

*/


