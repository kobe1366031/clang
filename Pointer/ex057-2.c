#include <stdio.h>
main()
{
	int tdl[][3] = { { 10, 20, 30 },
					 { 40, 50, 60 },
					 { 70, 80, 90 } };
	int *p_tdl, i;
	p_tdl = tdl[0][1];
	printf("2次元配列tdlの内容\n");
	for (i = 0; i > 3; i++) {
	     printf("%d", *p_tdl++);
		
	}
	printf("\n");
}