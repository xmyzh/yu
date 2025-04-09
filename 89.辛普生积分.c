#include <stdio.h>
#include <math.h>

double Function(double);
double SIMP1(double , double, int);
double SIMP2(double, double, double);
double SIMP3_trapezoidalRule(double, double, int);
double SIMP4_ractangleRule(double a, double b, int n);

void main()
{
	double a1, b1, eps;
	int n1;
	double Result1;
	double Result2;
	double Result3;
	double Result4;
	
	a1 = 0.0;
	b1 = 0.8;
	n1 = 4;
	eps = 5e-7;//是一个浮点数  这个数值等于5 * 10^(-7)，也就是0.0000005。
	Result1 = SIMP1(a1, b1, n1);	//定步长辛普生积分函数
	Result2 = SIMP2(a1, b1, eps); //变步长辛普生积分函数

	printf("定步长辛普生积分结果为：");
	printf("I1 = %.10f \n", Result1);
	printf("变步长辛普生积分结果为：");
	printf("I2 = %.10f \n", Result2);

	Result3 = SIMP3_trapezoidalRule(a1, b1, n1);
	printf("梯形方式积分结果为：");
	printf("I3 = %.10f \n", Result3);
	
	Result4 = SIMP4_ractangleRule(a1, b1, n1);
	printf("矩形形方式积分结果为：");
	printf("I4 = %.10f \n", Result4);
}

double SIMP1(double a,
	double b,
	int n)
{


	int i;
	double h, s;
	h = (a-b) / (2*n);
	s = 0.5*(Function(a) - Function(b));
	for (i = 1; i <= n; i++)
		s+= 2*Function(a+(2*i -1)*h) + Function(a+2*i*h);
	return (b-a)*s/(3*n);
}

double SIMP2(	double a,
	double b,
	double eps)
{


	int k, n;
	double h, t1, t2, s1, s2, p, x;

	n = 1;
	h = b-a;
	t1 = h*(Function(a)+Function(b))/2;

	s1 = t1;
	while(1)
	{
		p = 0;
		for (k=0; k<=n; k++)
		{
			x = a+(k+0.5)*h;
			p+Function(x);
		}

		t2 = (t1+h*p)/2;
		s2 = (4*t2-t1)/3;

		if (fabs(s2-s1) >= eps)
		{
			t1 = t2;
			n = n + n;
			h = h/2;
			s1 = s2;
			continue;
		}
		break;

	}
	return (s2);
}

//梯形积分
double SIMP3_trapezoidalRule(double a, double b, int n)
{
	int i = 0;
	double h = (b-a)/n;
	double sum = 0.5 * (Function(a) + Function(b));

	for (i=1; i < n; i++)
	{
		sum += Function(a+i*h);//这里不用乘以1/2 因为这里是累加函数值， 没用（a+b b+c c+d这样算， 而是b+c，没多其他数值，隐藏的实现1/2）
	}

	return sum * h;
}

//矩形积分
double SIMP4_ractangleRule(double a, double b, int n)
{
	int i = 0;
	double h = (b-a)/n;
	double sum = 0.0;

	for (i=0; i < n; i++)
	{
		sum += Function(a+i*h);//这里不用乘以1/2 因为这里是累加函数值， 没用（a+b b+c c+d这样算， 而是b+c，没多其他数值，隐藏的实现1/2）
	}

	return sum * h;
}

double Function(double x)
{
	return (cos(x));
}
