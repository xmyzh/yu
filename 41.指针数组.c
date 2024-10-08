#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//二分查找， 把字符串插入到指针数组中， 按数组元素的大小排布一遍
void main()
{
	int binary(char *ptr[], char *str, int n);
	void insert(char *ptr[], char *str, int n, int i);

	char *temp, *ptr1[6];
	int i;



	for (i=0; i < 5; i++)
	{
		ptr1[i] = (char *)malloc(20);
		printf("请为字符形指针数组【%d】赋初值， \n", i);
		gets(ptr1[i]);
	}
	ptr1[5] = (char *)malloc(20);
	printf("\n");
	printf("original string:\n");
	for (i=0; i<5; i++)
		printf("%s\n", ptr1[i]);

	printf("\ninput search string:\n");
	temp = (char *)malloc(20);
	gets(temp);

	i = binary(ptr1, temp, 5);//在这5个数组的位置中， 找一个可以插入的位置
	printf("i = %d\n", i);
	insert(ptr1, temp, 5, i);
	printf("output strings:\n");

	for(i=0; i <6; i++)
		printf("%s\n", ptr1[i]);
}

int binary(char *ptr[], char *str, int n)		//123   1234
{
	int hig, low, mid;
	low = 0;
	hig = n-1;

//过滤开头和结尾
	if (strcmp(str, ptr[0]) < 0)//逐个字符比较， 小为-1    新字符串str比【0】这组字符串小， 就插到0的位置
		return 0;

	if (strcmp(str, ptr[hig]) > 0)//逐个字符比较， 大为1   新字符串str比【n-1】这组字符串大，就插到n的位置
		return n;

//找中间的
	while(low <= hig)
	{
		mid = (low + hig) / 2;

		if (strcmp(str, ptr[mid]) < 0)//多个字符串，用输入的str字符串和这多个字符串的中间那一串比较下，输入的字符串比mid位置的字符串小， 就比较0-mid这部分，比hig=mid-1
		{
			hig = mid - 1;
		} else if (strcmp(str, ptr[mid]) > 0) {//输入的字符串比mid位置的字符串大， 就比较mid-high这部分，比low=mid+1
			low = mid + 1;
		} else {
			return mid;					//当输入的字符串和字符数组一样大，就返回mid的位置
		}
	}
	return low;
}

void insert(char *ptr[], char *str, int n, int i)
{
	int j;
	for (j=n; j>i; j--)
	{
		strcpy(ptr[j], ptr[j-1]);//把i~n的数据全部都往后复制一行， 前面一行的数据复制到后面一行
	}
	strcpy(ptr[i], str);
}



/*
一个数组， 有10个数组元素，且都是指针类型数据，称为指针数组，
char *point[10];  []的优先级比*高，可以写成char*(point[10])

strcmp函数是用来比较字符串大小的，但是比较的并不是字符串的长度，而是比较的是字符串的字符大小，abd就大于abcde，比较的时候是比较对应位置的字符大小。

*/

/*

C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\41.指针数组.exe
请为字符形指针数组【0】赋初值，
45556
请为字符形指针数组【1】赋初值，
885454
请为字符形指针数组【2】赋初值，
542221
请为字符形指针数组【3】赋初值，
85454522
请为字符形指针数组【4】赋初值，
2121

original string:
45556
885454
542221
85454522
2121

input search string:
3333333333
i = 0
output strings:
3333333333
45556
885454
542221
85454522
2121
*/


