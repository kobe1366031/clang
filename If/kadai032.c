#include <stdio.h>
main()
{
	char c;
	printf("整数?:");
	scanf("%c", &c);

	if (c % 2 == 1) {
		printf("その数は偶数です");
	}
	else {
		printf("その数は奇数です");
	}
}