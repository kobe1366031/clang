#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i, k;
	srand(time(0));
	k = rand() % (300 - 1 + 1) + 1;
	for (i = 0; i < 100; i++) {
		printf("%4d", k);

	}

}