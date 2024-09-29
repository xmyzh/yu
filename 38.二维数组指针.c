#include <stdio.h>



void main()
{
	int num;

	void average(float *point, int n);
	void search(float (*point)[4], int n);
	void average2(float *point, int n);

	static float score[4][4] = {{66,67,68,69},{76,77,78,79},{86,87,88,89},{96,97,98,99}};

	printf("班级的总平均分：传*score");
	average(*score, 16);

	printf("班级的总平均分：传score[0]");
	average(score[0], 16);

//知道了不能直接传arr， 二维数组名字
/*
	void average2(float **point, int n);



void average2(float **point, int n)
{
   22 |         average2(score, 16);
      |                  ^~~~~
      |                  |
      |                  float (*)[4]
38.二维数组指针.c:11:30: note: expected 'float *' but argument is of type 'float (*)[4]'
}
*/


	printf("请输入学生的学号(0-3：");
	scanf("%d", &num);
	search(score, num);//average(score[0], 16); 1.要说明一个错误用法，传二维数组时，不能直接传
}


void average(float *point, int n)
{
	float *p_end;
	float aver;
	float sum = 0;
	p_end = point + n - 1;
	for ( ; point <= p_end; point++)
	{
		sum = sum +(*point);
	}
	aver = sum / n;
	printf("%5.2f\n", aver);
}

void search(float(*point)[4], int n)
{
	int i;
	printf("\n测试用二维数组指针*(*(point+n))+ i)\n");
	for(i=0; i < 4; i++)
	{
		printf("%5.2f ", *(*(point+n))+ i);
	}

	printf("\n测试用二维数组指针，转成一维数组指针*(point[n]+ i)\n");
	for(i=0; i < 4; i++)
	{
		printf("%5.2f ", *(point[n]+ i));
	}
	printf("\n");
}



/*
1.使用二维数组指针， 传二维数组到函数时， 必须把函数参数定义为func(int(*p)[4])  (*p)[4]表示指向一个数组的指针， 这个数组是有4个int
2.p也是指向score[0],
	p+n 指向 score[n]
	*(p+n)+i 是 score[n][i]的地址 &score[n][i]
	*(*(point+n))+ i)是 score[n][i]的值score[n][i]

也可以理解成p指向score[0]
	p[n] 指向 score[n][0]的地址 &score[n][0]
	p[n]+i 指向 score[n][i]的地址 &score[n][i]
	*(point[n]+ i)) 是score[n][i] 的值
*/

/*

C:\Users\Administrator>D:\代码仓库\C语言精彩编程百例\38.二维数组指针.exe
班级的总平均分：传*score82.50
班级的总平均分：传score[0]82.50
请输入学生的学号(0-3：1

测试用二维数组指针*(*(point+n))+ i)
76.00 77.00 78.00 79.00
测试用二维数组指针，转成一维数组指针*(point[n]+ i)
76.00 77.00 78.00 79.00


*/



/*
参考：
#include <stdio.h>

// 定义一个函数，用于打印二维数组
void printArray(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // 定义一个二维数组
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // 注意：这里不能直接传递arr给printArray，因为arr的类型是int (*)[4]（一个指向4个int的数组的指针）
    // 而不是int **。因此，我们需要一种方法来“转换”它。

    // 方法1：使用指针数组
    int *ptrArray[3];
    for (int i = 0; i < 3; i++) {
        ptrArray[i] = arr[i]; // 数组名在表达式中退化为指向其首元素的指针
    }

    // 现在可以安全地调用printArray了
    printArray(ptrArray, 3, 4);

    // 方法2（不推荐，但了解一下）：动态分配内存（适用于非静态二维数组）
    // 注意：这种方法需要手动管理内存，且不适用于静态数组（如arr）

    return 0;
}
*/