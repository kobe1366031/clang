#include <stdio.h>
main()
{
	int d1, d2, d3, sum;
	float avg;

	printf("������3����:");
	scanf("%d%d%d", &d1, &d2, &d3);

	sum = d1 + d2 + d3;
	avg = (float)sum / 3;

	printf("���v=%d \n ����=%.2f \n", sum, avg);
}