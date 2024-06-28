#include <stdio.h>
main()
{
	char c;
	printf("®”?:");
	scanf("%c", &c);

	if (c % 2 == 1) {
		printf("‚»‚Ì”‚Í‹ô”‚Å‚·");
	}
	else {
		printf("‚»‚Ì”‚ÍŠï”‚Å‚·");
	}
}