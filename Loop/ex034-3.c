#include <stdio.h>
main()
{
	int num;
	int E = 0;
	int S = 0;

	printf("”‚ÍH");
	scanf("%d", &num);

	do {
		E = 0;
		do {
			printf("*");
			E++;
		} while (E < S + 1);
		printf("\n");
		S++;
		num--;
	} while (num > 0);
}