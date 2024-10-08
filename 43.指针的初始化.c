#include <stdio.h>
#include <string.h>

int search(char* p[], char * name);

char *names[] = {
	"Herb",
	"Rex",
	"Dennis",
	"John",
	NULL
};

void main()
{
	if (search(names, "Herb") != -1)
		printf("Herb is in list.\n");

	if (search(names, "Mary") == -1)
		printf("Mary not found.\n");
}

int search(char *p[], char* name)	//在字符指针数组中， 查找name字符串
{
	register int t;

	for (t = 0; p[t]; ++t)			//注意这里的for循环， 是直接读取p【t】  遇到NULL 会停止
		if (!strcmp(p[t], name))	//如果p[t] 对于的字符串和name一样， 则返回0，这里！后if会成立， return t
			return t;

	return -1;
}


/*
char *p = NULL;空指针， 指针不指向任何对象
字符串循环， 可以在字符串赋值时写NULL，来表示要停止的位置。
*/

/*

Process started (PID=13332) >>>
Herb is in list.
Mary not found.
*/


