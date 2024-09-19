#include <stdio.h>


void Print_Binary(unsigned int x) {
    if (x > 1) {
        Print_Binary(x >> 1);
    } else {
		putchar('\n');
	}
    putchar((x & 1) ? '1' : '0');
}


void main()
{
	unsigned char result;//只能用char int short类型操作，浮点类型以上无法使用位操作。
	int a,b,c,d;
	a = 0b0010; //2		 //可以用0b表示二进制方式赋值，
	c = 0b0110; //6

	b = 0b0100;	//4
	d = 0b1000;  //8

	//对变量进行“按位与&”  都1为1，否则位0
	result = a & c;
	Print_Binary(result);
	printf("\n result = %d\n", result);


	//对变量进行“按位或|” 有1则1
	result = b | d;
	Print_Binary(result);
	printf("\n result = %d\n", result);


	//对变量进行“按位异或^”	同号为0，异号为1
	result = a ^ d;
	Print_Binary(result);
	printf("\n result = %d\n", result);


	//对变量进行“按位取反~”		对二进制数按位取反，0变1， 1变0
	result = ~a;
	Print_Binary(result);
	printf("\n result = %d\n", result);


/*
10
 result = 2

1100
 result = 12

1010
 result = 10

11111101
 result = 253
*/
}