#include <stdio.h>
main()
{
	float fno;
	printf("実数を入れて:");
	scanf("%f" &fno);
	printf("2倍すると%f\n3倍すると%f\n", fno * 2, fno * 3);
}