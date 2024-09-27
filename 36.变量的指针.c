#include <stdio.h>


void swap(int *pt1, int *pt2);
void exchange(int *q1, int *q2, int *q3);

void main()
{
	int x, y, z, *p1, *p2, *p3;
	printf("请输入3个整数\n");
	scanf("%d,%d,%d", &x, &y, &z);
	p1 = &x;
	p2 = &y;
	p3 = &z;
	exchange(p1, p2, p3);
	printf("按大小排序后的3个整为：");
	printf("%d,%d,%d\n",x, y, z);
}

void swap(int *pt1, int *pt2)
{
	int p;
	p = *pt1;
	*pt1 = *pt2;
	*pt2 = p;
}

void exchange(int *q1, int *q2, int *q3)
{
	if (*q1 < *q2) swap(q1, q2);
	if (*q1 < *q3) swap(q1, q3);
	if (*q2 < *q3) swap(q2, q3);
}

/*
ptr1 = &m表示变量m的地址赋值给指针ptr1

指针可以指向任何类型的变量， 当定义指针变量是， 指针变量的值是随机的， 不确定它的具体指向， 必须为其赋值才有意义。
*/

/*

C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\36.变量的指针.exe
请输入3个整数
4,8,9
按大小排序后的3个整为：9,8,4

*/


