#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i, sam;
	srand(time(0));
	sam = rand() % (5 - 1 + 1) + 1;
	printf("今日のあなたの運勢は、");
	for (i = 1; i <= sam; i++); {
		printf("☆");
	}
	printf("です。\n");
}