#include <stdio.h>
main()
{
	float no;
	printf("整数?:");
	scanf("%f", &no);
	printf("2倍すると%f\n3倍すると%f\n4倍すると%f\n", no * 2, no * 3, no * 4);
}