#include <stdio.h>
main()
{
	int a, b, sum;
	float avg;
	a = 10, 20, 30, 40, 50, 60, 70, 80, 90, 100;
	b = 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000;
	sum = b + a;
	sum = a + b;
	avg = sum / 2;

	printf("���v:%d", sum,a++);
	printf("����:%.1f\n", avg,a++);

	printf("���v:%d", sum, b++);
	printf("����:%.1f\n", avg, b++);
	return 0;
}