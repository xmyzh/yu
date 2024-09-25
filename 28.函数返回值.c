#include <stdio.h>

int find_substr(char* s1, char* s2);

void main()
{
	if (find_substr("C is fun","is") != -1)
		printf("Substring is found. \n");
}

int find_substr(char *s1, char *s2)
{
	register int t;
	char *p, *p2;

	for (t=0; s1[t]; t++)
	{
		p = &s1[t];
		p2 = s2;

		printf("%c, %c \n",*p, *p2);
		while(*p2 && *p2==*p)
		{
			printf("%c, %c \n",*p, *p2);
			p++;
			p2++;
		}
		if(! *p2)
			return t;

	}
	return -1;
}


/*
函数返回值用return value表示，void类型没有返回值
（1）一个函数可以有一个以上的return，执行到哪个return，哪个就起作用
（2）返回值类型，在函数定义时确定， 如果没家类型的函数，自动按整数类型来出来
（3）如果函数值的类型， 和return语句中的不一样， 就以函数类型为准。
（4）函数没return语句，实际上也会返回一个值， 但这个值是不确定的。
（5）为了明确表明返回的数值是不确定的， 用void定义无类型

/*

Process started (PID=8940) >>>
C, i
 , i
i, i
i, i
s, s
Substring is found.
*/


