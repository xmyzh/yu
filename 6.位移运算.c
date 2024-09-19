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
	unsigned int a,b,c,d;	//移位时，会根据变量类型设置上限， 当使用char类型时超过255会变0
	int n;
	a = 0b01000000;//64;
	n = 0b0010;//2;

	//将操作数a 右移（6-n）即4位,   低位右移后舍弃，
	printf("original a=%d",a);
	Print_Binary(a);
	b = a >> (n);
	Print_Binary(a);		//测试知道了，位移只是算式结果移位， 变量还是原始值。
	printf("\n after a >> (6-n), a=%d",a);
	Print_Binary(b);//64/16 = 4
	printf("\n b=%d\n", b);

	//将操作数a 左移（n）即2位,   高位左移后舍弃，
	c = a << (n);
	Print_Binary(a);
	printf("\n after a << (n), a=%d",a);
	Print_Binary(c);//64*4=256
	printf("\n c=%d\n", c);

	//对操作数a进行混合位运算
	Print_Binary(a);
	Print_Binary((a >> (n-1)));
	Print_Binary((a << (n+1)));

	d = (a >> (n-1)) | ((a << (n+1)));
	printf("d = %d\n", d);
}