#include <stdio.h>

void convert(int number, int n)
{
	int i;

	if (n <= number) {
		printf("已经历%d世轮回\n", n);
		convert(number, n+1);
	} else {
		printf("你已在菩提树下历经百世轮回，此刻赠与你千年智慧轮\n", n);
	}
}

void main()
{
	int number;
	int n = 0;

	printf("输入整数: ");
	scanf("%d", &number);
	printf("输出是：\n");

	if (number < 0)
	{
		putchar('-');
		number = -number;
	}
	convert(number, n+1);
	putchar('\n');
}




/*
看递归就是不断执行某种循环， 不满足条件就重新执行这个函数，每次参数可能会变。
直到最后，在循环中达到某个条件后才退出。

 有些例子使用递归，不停执行value /10， 直到最高位除10为0，则退出
 void convert(int n)
 {
	 int i
	 if ((i=n/10) !=0)
		 convert(i);
	 putchar(n%10+'0');
 }
*/

/*


输入整数: 100
输出是：
已经历1世轮回
已经历2世轮回
已经历3世轮回
已经历4世轮回
已经历5世轮回
已经历6世轮回
已经历7世轮回
已经历8世轮回
已经历9世轮回
已经历10世轮回
已经历11世轮回
已经历12世轮回
已经历13世轮回
已经历14世轮回
已经历15世轮回
已经历16世轮回
已经历17世轮回
已经历18世轮回
已经历19世轮回
已经历20世轮回
已经历21世轮回
已经历22世轮回
已经历23世轮回
已经历24世轮回
已经历25世轮回
已经历26世轮回
已经历27世轮回
已经历28世轮回
已经历29世轮回
已经历30世轮回
已经历31世轮回
已经历32世轮回
已经历33世轮回
已经历34世轮回
已经历35世轮回
已经历36世轮回
已经历37世轮回
已经历38世轮回
已经历39世轮回
已经历40世轮回
已经历41世轮回
已经历42世轮回
已经历43世轮回
已经历44世轮回
已经历45世轮回
已经历46世轮回
已经历47世轮回
已经历48世轮回
已经历49世轮回
已经历50世轮回
已经历51世轮回
已经历52世轮回
已经历53世轮回
已经历54世轮回
已经历55世轮回
已经历56世轮回
已经历57世轮回
已经历58世轮回
已经历59世轮回
已经历60世轮回
已经历61世轮回
已经历62世轮回
已经历63世轮回
已经历64世轮回
已经历65世轮回
已经历66世轮回
已经历67世轮回
已经历68世轮回
已经历69世轮回
已经历70世轮回
已经历71世轮回
已经历72世轮回
已经历73世轮回
已经历74世轮回
已经历75世轮回
已经历76世轮回
已经历77世轮回
已经历78世轮回
已经历79世轮回
已经历80世轮回
已经历81世轮回
已经历82世轮回
已经历83世轮回
已经历84世轮回
已经历85世轮回
已经历86世轮回
已经历87世轮回
已经历88世轮回
已经历89世轮回
已经历90世轮回
已经历91世轮回
已经历92世轮回
已经历93世轮回
已经历94世轮回
已经历95世轮回
已经历96世轮回
已经历97世轮回
已经历98世轮回
已经历99世轮回
已经历100世轮回
你已在菩提树下历经百世轮回，此刻赠与你千年智慧轮
*/


