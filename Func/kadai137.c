#include <stdio.h>
int AlphaCheck(char cdat);
main()
{
	char c;
	int ret;
	printf("アルファベット1文字?");
	scanf("%c", &c);
	ret = AlphaCheck(c);
	if (ret == 1) {
		printf("戻り値は%dなので入力した文字は大文字です\n", ret);
	}


}