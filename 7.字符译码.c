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
	char c1,c2,c3,c4,c5,c6,c7;
	c1 = 'C';
	c2 = 'h';
	c3 = 'i';
	c4 = 'n';
	c5 = 'e';
	c6 = 's';
	c7 = 'e';

	printf("编码为 %c%c%c%c%c%c%c\n", c1,c2,c3,c4,c5,c6,c7);

	//对字符进行修改

	c1 = c1+1;
	c2 = c2+1;
	c3 = c3+1;
	c4 = c4+1;
	c5 = c5+1;
	c6 = c6+1;
	c7 = c7+1;

	printf("译码为 %c%c%c%c%c%c%c\n", c1,c2,c3,c4,c5,c6,c7);

}
/*
编码为 Chinese
译码为 Dijoftf
*/