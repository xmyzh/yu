#include <stdio.h>

int main()
{
	int array1[10] = {0,1,2,3,4,5,6,7,8,9};//整数
	char array2[13] = "How are you!";//字符
	char array3[13] = {'H','o','w','a','r','e','y','o','u','!'};
	int array4[4][4] = {
		12, 13, 15, 5,
		1,  2,   3, 6,
		25, 63, 1, 63
	};
	char array5[]="How are you!";
	int array6[][2] = {
		{1, 50},
		{45, 2},
		{2, 0},
		{12,32},
		{42,33}

	};

	printf("%s\n", array2);
	printf("%s\n", array5);
}

/*


*/


/*
How are you!
How are you!
*/


