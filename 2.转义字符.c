#include<stdio.h>

int main(void)
{
	//换行符'\n',用于输出换行
	printf("how are you? \n");
	printf("I am fine.\n\n");

	//换向跳格符'\t';调到下个输出区
	printf("how are you? \t");
	printf("I am fine.\n\n");

	//退格符'\b';使当前的位置退一格，输出的起始位置左移一格
	printf("how are you? \n");
	printf("\bI am fine.\n\n");

	//回车符'\r';使当前输出位置回到本行开头
	printf("		I am fine.\n");
	printf("\rhow are you? \n\n");

	//多格转义字符的混合运用
	printf("note:\n a s\t\bk\r\n");

/*
how are you?
I am fine.

how are you? 	I am fine.		知道了\t就是tab键

how are you? I am fine.			\b把前面的\n给删掉了

		I am fine.
how are you? 					\r没有跑到上一行，只是回到开头位置

note:
 a sk							\t\b  \b抵消了\t     \r\n让后面的内容换行了
*/

}