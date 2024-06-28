#include <stdio.h>
main()
{
	int A, num, sum;

	printf("”‚ÍH:");
	scanf("%d", &num);

	for (sum = 0, A = 0; num != -999; A++) {
		sum += num;
		printf("”‚ÍH");
		scanf("%d", &num);
	}
	printf("‡Œv=%d \t •½‹Ï=%.2f\n", sum, (float)sum / A);
}