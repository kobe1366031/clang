#include <stdio.h>
main()
{
	char c;
	printf("1文字を入力:");
	scanf("%c", &c);
	
	if (c >= 'A' && c <= 'Z') {
		printf("大文字");
	}
	else{
		printf("その他");
	}
}