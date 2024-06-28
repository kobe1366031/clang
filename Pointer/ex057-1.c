#include <stdio.h>
main()
{
	int tdl[][3] = { { 10, 20, 30 },
					 { 40, 50, 60 },
					 { 70, 80, 90 } };
	int* p_tdl, i;
	p_tdl = tdl[1];
	printf("2ŽŸŒ³”z—ñtdl‚Ì“à—e\n");
	for (i = 0; i < 3; i++) {
		printf("%d", *p_tdl++);
	}
	printf("\n");
}