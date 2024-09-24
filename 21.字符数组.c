#include <stdio.h>
//宏定义

#define MAX 100
#define LEN 80

//二维数组制作一个简单的文本编辑器

int main()
{
	char text[MAX][LEN];
	register int t, i, j;

	//逐行输入字符串
	for(t=0; t<MAX; t++)
	{
		printf("%d: ", t);
		gets(text[t]);
		if (!text[t][0]) {
			break;
		}
	}

	//按行逐个输出字符串
	for(i=0; i<t; i++)
	{
		for (j=0; text[i][j]; j++)
			putchar(text[i][j]);//输出函数
		putchar('\n');
	}
}

/*
1.学到了一个文本原来可以用二维数组来表述行列
2. char *gets(char *str), 从stdin中读取字符串，吧督导的结果存到str指定的字符数组中，知道督导eof为止
3. putchar 向终端输出一个字符串。
*/


/*

C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\21.字符数组.exe
0: fsfsadfh好大一朵美丽的茉莉花
1: 好可爱的一朵花
2: 每天都这么开心的吗
3: 真颗说防守打法哦
4: 这样的啊
5:
fsfsadfh好大一朵美丽的茉莉花
好可爱的一朵花
每天都这么开心的吗
哦
这样的啊

*/


