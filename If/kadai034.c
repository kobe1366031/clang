#include <stdio.h>
main()
{
	char c;
	printf("�A���t�@�x�b�g?:");
	scanf("%c", &c);

	if (c >= 'A' && c <= 'Z') {
		printf("�啶��");
	}
	else if (c >= 'a' && c <= 'z') {
		printf("������");
	}
	else {
		printf("ERROR");
	}
}