#include<stdio.h>

/*
最高
	!
	> >= < <=
	==	!=
	&&
最低	||
*/

int main(void)
{
	int logic;

	int a = 1;
	int b = 2;
	int c = 3;

	logic = a+b>c&&b<=c;
	//logic = a+b>c && b<=c;
	//可以理解成logic = (a+b>c) && (b<=c);
	printf("logic a+b>c && b<=c= %d\n", logic);

	logic = a>= b+c||b==c;
	//可以理解成logic = (a>=(b+c)) ||  (b==c);
	printf("logic a>= b+c||b==c= %d\n", logic);

	logic = !(a<c)+b!=1&&(a+c)/2;
	//可以理解成logic = (((!(a<c))+b)!=1)   &&  ((a+c)/2);

	printf("logic !(a<c)+b!=1&&(a+c)/2= %d\n", logic);

/*
logic a+b>c && b<=c= 0
logic a>= b+c||b==c= 0
logic !(a<c)+b!=1&&(a+c)/2= 1
*/

}