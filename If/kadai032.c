#include <stdio.h>
main()
{
	char c;
	printf("����?:");
	scanf("%c", &c);

	if (c % 2 == 1) {
		printf("���̐��͋����ł�");
	}
	else {
		printf("���̐��͊�ł�");
	}
}