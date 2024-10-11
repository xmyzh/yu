#include <stdio.h>
#include <string.h>

enum color {blue, red, yellow, purple, black};
enum color i, j, k, pri;




void main()
{
	int n, loop;
	n = 0;

	for (i=blue; i<=black; i++)
	{
		switch(i)
		{
		case blue: printf("%-10s\n", "blue");
			break;
		case red: printf("%-10s\n", "red");
			break;
		case yellow: printf("%-10s\n", "yellow");
			break;
		case purple: printf("%-10s\n", "purple");
			break;
		case black: printf("%-10s\n", "black");
			break;
		break;
		}
	}
}


/*
枚举类型是一系列命名的整形常量，如果一个变量只有几种可能的值， 那就可以定义为么句类型
enum fruit{apple，banana, orange};
接着就可以用fruit声明某个类型的变量了，
enum fruit my_favorite;

赋值
my_favorite = banana;	定义变量后， 只能用枚举类型中指定的常量来赋值，

附加：
这些常量，可以在的定义时指定初始值：enum fruit{apple=2，banana, orange};
banana的值就是2+1  =3
orange的值就是2+1+1=4

*/

/*
cmd /k cd /d "D:\代码仓库\C语言精彩编程百例" & gcc "50.枚举类型.c" -o "50.枚举类型.exe" & "50.枚举类型.exe"
Process started (PID=15188) >>>
blue
red
yellow
purple
black
*/


