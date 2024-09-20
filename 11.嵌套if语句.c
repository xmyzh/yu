#include <stdio.h>

void main(void)
{
	int sex, weight, cubage;
	printf("请输入受血者的性别和体重：\n");
	scanf("%d, %d", &sex, &weight);

	if (sex >= 0) {
		if (weight > 120) {
			cubage = 200;
			printf("应该输血: %d毫升\n", cubage);
		} else {
			cubage = 180;
			printf("应该输血: %d毫升\n", cubage);
		}
	} else {
		if (weight > 100) {
			cubage = 150;
			printf("应该输血: %d毫升\n", cubage);
		} else {
			cubage = 120;
			printf("应该输血: %d毫升\n", cubage);
		}
	}
}

/*

请输入受血者的性别和体重：
10 130
应该输血: 180毫升
*/