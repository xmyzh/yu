#include <stdio.h>
#include <math.h>

int main()
{

	int t = -10;
	//运算
	do
	{
		printf("t=%d\n",t);
		t++;
	}while(fabs(t)>=1);

	printf("fabs(t)=%d",fabs(t));


}
/*
do while 先执行一次循环体

*/


/*
t=-10
t=-9
t=-8
t=-7
t=-6
t=-5
t=-4
t=-3
t=-2
t=-1
fabs(t)=0
*/
