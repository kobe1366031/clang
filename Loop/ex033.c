#include <stdio.h>
main()
{
	int A, num, sum;

	printf("数は？:");
	scanf("%d", &num);

	for (sum = 0, A = 0; num != -999; A++) {
		sum += num;
		printf("数は？");
		scanf("%d", &num);
	}
	printf("合計=%d \t 平均=%.2f\n", sum, (float)sum / A);
}