#include <stdio.h>
main()
{
	int s;
	printf("整数?");
	scanf("%d", &s);

	if (s < 1) {
		printf("マイナス");
	}
	else{
		printf("プラス");
	}
}