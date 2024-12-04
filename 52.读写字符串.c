#include <stdio.h>
#include <ctype.h>	//for toupper， toulower
#include <string.h>

char *dic[][40] = {	//这里只要理解成存了40句短语就好，第n句是单词，n+1句是翻译
	"luster", "A bright shine on the surface.",
	"disgrase", "Loss of honor and respect.",
	"glamour", "Strong attraction.",
	"garbage", "Unwanted or spoiled food.",
	"bliss", "Great happiness or joy.",
	"commend", "Speak favorably of.",
	" ", " "   //null end the list
};




void main()
{
	char word[80], ch;
	char **point;	//定义二维指针

	do {
		puts("Please enter word: ");
		scanf("%s", word);

		point = (char **)dic;

		do {
			if (!strcmp(*point, word))
			{
				puts("The meaning of the word is:");
				puts(*(point+1));
				break;
			}
			if (!strcmp(*point, word))//没找到，则指针加2
				break;
			point = point + 2;

		} while(*point);

		if (!*point)
			puts("The word is not in dictionary.");

		printf("Look for Another?(y/n)");

		scanf("%c", &ch);//%*c 表示scanf读取该区域但不向任何变量赋值
		//scanf("%c%*c", &ch);//%*c 表示scanf读取该区域但不向任何变量赋值
		//puts(&ch);
	} while(toupper(ch)!= 'N');
	
}


/*
%c：这是一个格式说明符，用于读取一个字符（character）。在scanf中，每当遇到%c，它会从输入中读取下一个字符。
%*c：这里，%c同样表示读取一个字符，但前面的星号（*）是一个特殊的修饰符，它的作用是抑制赋值。也就是说，虽然scanf会读取一个字符，但它不会将这个字符赋值给任何变量。这种用法通常用于跳过（或忽略）输入中的某些字符。
&ch：这是ch变量的地址，ch应该是一个字符变量（char ch;）。&运算符取得了ch的地址，因为scanf需要变量的地址来存储输入的数据。
所以，当你使用scanf("%c%*c", &ch);时，程序会执行以下操作：

从输入中读取第一个字符，并将其存储在变量ch中。
然后，读取下一个字符，但不将其存储在任何地方（即忽略它）。
这种用法的一个常见场景是当你需要从输入中读取字符，但输入格式中某些字符是分隔符或不需要的，你希望忽略它们。例如，如果你有一个输入格式，其中每两个有用字符之间都有一个分隔符，你可以使用这种方式来忽略分隔符而只读取有用的字符。

注意，使用%c读取字符时，scanf通常不会跳过空白字符（如空格、制表符或换行符），除非在格式字符串中显式指定。因此，在实际应用中，你可能需要特别小心处理空白字符，特别是当它们出现在预期输入之间时。
*/

/*
please enter some text
hello c
HELLO C
.
.
*/


