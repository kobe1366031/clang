#include <stdio.h>
main()
{
	int C, sum;

	sum = 0;
	for (C = 1; C <= 10; C++) {
		sum += C;
		printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a=%d\n", C, sum);
	}
}