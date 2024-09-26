#include <stdio.h>


void main()
{
	extern int mutiply();
	extern int sum();

	int a, b;
	int result;

	printf("please input a,b: ");
	scanf("%d, %d", &a, &b);
	result = mutiply(a, b);
	printf("The result of mutiply is:%d", result);
	result = sum(a, b);
	printf("\nThe result of sum is:%d\n", result);
}


/*
	1.内部函数：一个函数只能被本文件的其他函数调用， 定义内部函数函数名和类型前要加static    如static int func()
	如果不同文件中有同名的内部函数， 它们相互不冲突，不干扰。

	2.外部函数：函数可以被其他文件调用， 定义外部函数默认有extern 如   extern int func(), 也可以不写extern，默认为外部函数   int func()
	在需要调用此函数的文件中， 一般需要用extern 说明所用函数是外部函数。
	    所有有些头文件， 在声明的位置写extern int mutiply();
		在这题中，没 .h文件  所以在main函数中，用 extern int mutiply()来声明

	3.在调用函数中， 函数声明的参数可以不写，或者要和extern的那个函数参数个数一样， 不一样的话编译不过
*/

/*
这里编译比较特殊， 需要添加两个c文件一起编译， 编译指令改为如下：

cmd /k cd /d "$(CURRENT_DIRECTORY)" & gcc "33.内部和外部函数_ex1.c"  "33.内部和外部函数_ex2.c" "$(FILE_NAME)" -o "$(NAME_PART).exe" & "$(NAME_PART).exe"


运行：
C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\33.内部和外部函数_main.exe
please input a,b: 4,5
The result of mutiply is:20
The result of sum is:9
*/


