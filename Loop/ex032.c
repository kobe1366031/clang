#include <stdio.h>
main()
{
	int hum, A;

	printf("��������:");
	scanf("%d", &hum);


	for (A = 1; A <= 5; A++) {
		printf("%d", hum * A);
	}
}