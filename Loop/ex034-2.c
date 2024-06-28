#include <stdio.h>
main()
{
	int num, V;


	printf("”‚ÍH");
	scanf("%d", &num);

	do {
		V = 0;
		do {
			printf("*");
			V++;
		} while (V < 5);
		printf("\n");
		num--;
	} while (num > 0);
}