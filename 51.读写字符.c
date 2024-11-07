#include <stdio.h>
#include <ctype.h>	//for toupper， toulower





void main()
{
	char ch;
	printf("please enter some text\n");

	do {
		ch = getchar();	//错误返回EOF（-1）
		if (islower(ch))
			ch = toupper(ch);
		else
			ch = tolower(ch);
		putchar(ch);	//错误返回EOF（-1）
	}while(ch != '.');
}


/*
toupper， 返回大写字母
toulower  返回小写字母
getchar 从键盘读取一个字符
putchar 显示字符到屏幕
*/

/*
please enter some text
hello c
HELLO C
.
.
*/


