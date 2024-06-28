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

	printf("‡Œv:%d", sum,a++);
	printf("•½‹Ï:%.1f\n", avg,a++);

	printf("‡Œv:%d", sum, b++);
	printf("•½‹Ï:%.1f\n", avg, b++);
	return 0;
}