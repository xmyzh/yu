#include<stdio.h>



int main(void)
{
	int i, j, k;
	int m, n, p;

	i = 8;
	j = 10;
	k = 12;

	//自增在操作数之前，操作数的值会先自增
	m = ++i;
	printf("i=%d\n", i);//9
	printf("m=%d\n", m);//9

	//自增在操作数之后，操作数的值还是用原值计算，算式结束后再自增。
	n = j--;
	printf("j=%d\n", j);//9
	printf("n=%d\n", n);//10

	//自增 自减混合
	printf("m=%d,n=%d, k=%d\n", m,n,k);
	p = (++m)*(n++)+(--k);//10*10+11
	printf("k=%d\n", k);//12
	printf("p=%d\n", p);//111
}

/*
i=9
m=9
j=9
n=10
m=9,n=10, k=12
k=11
p=111

*/