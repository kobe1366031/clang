#include <stdio.h>
main()
{
	int hum, A;

	printf("数を入れて:");
	scanf("%d", &hum);


	for (A = 1; A <= 5; A++) {
		printf("%d", hum * A);
	}
}