#include <stdio.h>
main()
{
	int num, E, S;

	printf("”‚ÍH");
	scanf("%d", &num);

	E = 0;
	S = 0;

	do {
		E = 0;
		do {
			printf(" ");
			E++;
		} while (E < num - S);

		  E = 0;
		do {
			printf("*");
			E++;
		} while (E < S + 1);

		printf("\n");
		S++;
	
	} while (S < num);
}