#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i, sam;
	srand(time(0));
	sam = rand() % (5 - 1 + 1) + 1;
	printf("�����̂��Ȃ��̉^���́A");
	for (i = 1; i <= sam; i++); {
		printf("��");
	}
	printf("�ł��B\n");
}