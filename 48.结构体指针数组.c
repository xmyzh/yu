#include <stdio.h>
#include <string.h>

struct student
{
	long num;
	char name[20];
	char sex;
	int age;
};//定义结构体

struct student stu[4] = {
	{97032, "xiao ming", 'M', 20},
	{97033, "xiao wang", 'M', 20},
	{97034, "xiao tong", 'M', 21},
	{97035, "xiao shui", 'F', 18}
};



void main()
{
	struct student *p;
	printf("学号 姓名 性别 年龄\n");

	for (p=stu; p<stu+4; p++)//这里p++ 相当于指向stu[0]地址改为指向stu[1]地址
	{
		printf("%-8ld %-12s %-10c %-3d\n", p->num, p->name, p->sex, p->age);
	}
}


/*
结构体指针，已经定义为指向struct student类型的数据，它只能指向一个结构体类型的数据， 不能指向某个成员
*/

/*
学号 姓名 性别 年龄
97032    xiao ming    M          20
97033    xiao wang    M          20
97034    xiao tong    M          21
97035    xiao shui    F          18
*/


