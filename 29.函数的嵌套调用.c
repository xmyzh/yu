#include <stdio.h>
#include <math.h>

//求解一元三次方程
//x3-8x2+12x-30=0
//弦截法求方程的根

//没看明白， 只是看到root函数调用了xpoint


float f(float x)
{
	float y;
	y = ((x-8.0)*x + 12.0)*x - 30.0;
	return y;
}

float xpoint(float x1, float x2)
{
    float y1 = f(x1);
    float y2 = f(x2);
    return x1 - (y1 * (x1 - x2)) / (y2 - y1);
}

float root(float x1, float x2)
{
	float x, y, y1;
	y1 = f(x1);

	do {
		x = xpoint(x1, x2);
		y = f(x);
		if (y*y1 > 0) {
			y1 = y;
			x1 = x;
		} else {
			x2 = x;
		}
	} while(fabs(y) >= 0.0001);
	return x;
}

void main()
{
	float x1, x2, f1, f2, x;
	do {
		printf("Please input x1, x2:\n");
		scanf("%f %f", &x1, &x2);
		f1 = f(x1);
		f2 = f(x2);
	} while(f1 * f2 > 0);
	x = root(x1, x2);
	printf("Aroot of equation is %9.6f\n", x);
}




/*
函数返回值用return value表示，void类型没有返回值
（1）一个函数可以有一个以上的return，执行到哪个return，哪个就起作用
（2）返回值类型，在函数定义时确定， 如果没家类型的函数，自动按整数类型来出来
（3）如果函数值的类型， 和return语句中的不一样， 就以函数类型为准。
（4）函数没return语句，实际上也会返回一个值， 但这个值是不确定的。
（5）为了明确表明返回的数值是不确定的， 用void定义无类型

/*

C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\29.函数的嵌套调用.exe
Please input x1, x2:
6 8
Aroot of equation is  6.890317
*/


