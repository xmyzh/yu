#include <stdio.h>
#include <math.h>

int main()
{

	int r;
	double area;
	for (r=1; r < 10; r++)
	{
		area = 3.1416* r*r;
		if (area < 120.0) {

			printf("continue square = %f\n", area);
			continue;
		} else {
			printf("break square = %f\n", area);
			break;
		}


	}

	//将最大面积的半径输出
	printf("now radius=%d\n\n", r-1);


}
/*
break 不能用于循环语句和switch以外的任何语句
continue 用于for while do while，开启下一个循环

*/


/*
continue square = 3.141600
continue square = 12.566400
continue square = 28.274400
continue square = 50.265600
continue square = 78.540000
continue square = 113.097600
break square = 153.938400
now radius=6
*/
