#include <stdio.h>
//指针的功能：
//1.帮助快速引用数组元素，
//2.允许c函数改变元的内容
//3.支持链表和其他动态数据结构
void main()
{

	int *p;//定义一个整形指针p， 一个指向整数的指针，指针指向的数据类型为基类型，指针变量本身也是变量
	int begin, end;

	begin = 10;
	p = &begin;//begin的内存地址放到p，地址是乌龙地址和变量的值无关。
	end = *p;//将p指针指向的内存地址中的值赋值给end，也就是begin地址中的变量数值10

	printf("begin = %d\n", begin);
	printf("end = %d\n", end);

	//输出指针中的地址和地址对应的内存值
	printf("p=%x\n", p);
	printf("*p = %d\n", *p);
}

/*
begin = 10
end = 10
p=ffffcc10
*p = 10
*/