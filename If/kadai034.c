#include <stdio.h>
main()
{
	char c;
	printf("アルファベット?:");
	scanf("%c", &c);

	if (c >= 'A' && c <= 'Z') {
		printf("大文字");
	}
	else if (c >= 'a' && c <= 'z') {
		printf("小文字");
	}
	else {
		printf("ERROR");
	}
}