#include <stdio.h>
#include <string.h>

struct student
{
	char name[30];
	char sex[10];
	long num;
	float score;
};//定义结构体




void main()
{
	struct student stu;
	struct student *p;
	p = &stu;

	stu.num = 1001;
	strcpy(stu.name, "小鸿");
	strcpy(stu.sex, "男");
	stu.score = 98.5;

	printf("学号： %ld\n 姓名：%s\n性别：%s\n分数：%4.2f\n", stu.num, stu.name, stu.sex, stu.score);

	printf("\n(*p).\n");

	printf("学号： %ld\n 姓名：%s\n性别：%s\n分数：%4.2f\n", (*p).num, (*p).name, (*p).sex, (*p).score);

	printf("\n p->\n");

	printf("学号： %ld\n 姓名：%s\n性别：%s\n分数：%4.2f\n", p->num, p->name, p->sex, p->score);

}


/*
1.  (*p). 表示p指向的结构体变量， 这里(*p). .的优先级高于*，所以括号不能省略。
2.  p->是直接引用结构体成员，相当于(*p).
3. strcpy， 给字符串赋值
*/

/*
学号： 1001
 姓名：小鸿
性别：男
分数：98.50

(*p).
学号： 1001
 姓名：小鸿
性别：男
分数：98.50

 p->
学号： 1001
 姓名：小鸿
性别：男
分数：98.50

*/


