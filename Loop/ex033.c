#include <stdio.h>
main()
{
	int A, num, sum;

	printf("���́H:");
	scanf("%d", &num);

	for (sum = 0, A = 0; num != -999; A++) {
		sum += num;
		printf("���́H");
		scanf("%d", &num);
	}
	printf("���v=%d \t ����=%.2f\n", sum, (float)sum / A);
}