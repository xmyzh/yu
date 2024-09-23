#include <stdio.h>

void printDigits(int number)
{
	int i = 0;
    if (number == 0) {
        printf("0");
        return;
    }

    // 处理负数情况（如果需要）
    if (number < 0) {
        printf("-");
        number = -number; // 转换为正数处理
    }

    // 循环直到number为0
	while(number > 0)
	{

		int num_1 = number % 10;
		printf("%d ");
		number = number / 10;
		i++;
	}

	//判断是几位的整数
	printf("\n");
	switch(i)
	{
	case 1:
		printf("这是%d位整数\n",i);
		break;
	case 2:
		printf("这是%d位整数\n",i);
		break;
	case 3:
		printf("这是%d位整数\n",i);
		break;
	case 4:
		printf("这是%d位整数\n",i);
		break;
	case 5:
		printf("这是%d位整数\n",i);
		break;
	case 6:
		printf("这是%d位整数\n",i);
		break;
	default:
		printf("位数太大了\n",i);
		break;
	}

	//1.switch 只能测试是否相等
	//2.各个case常数必须各异
	//3.switch语句使用字符常数是， 这些常数会被自动转换成整数。

    // 注意：上面的循环会导致数字被反向打印（即先打印个位，然后十位...），
    // 如果你需要正序打印，则需要将打印语句放入循环之前或之后进行特殊处理
}

int main() {
    int number;
    printf("请输入一个整数: ");
    scanf("%d", &number);
    printf("数字的反向序列为: ");
    printDigits(number);
    printf("\n");

    return 0;
}

/*

请输入一个整数: 123456
数字的反向序列为: 6 5 4 3 2 1
这是6位整数
*/