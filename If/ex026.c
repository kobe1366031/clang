#include <stdio.h>
main()
{
	int k;
	printf("月を入力:");
	scanf("%d", &k);
	if (k == 1 || k == 3 || k == 5 || k == 7 || k == 8 || k == 10 || k == 12) {
		printf("最終日は31日です");
	}
	else{
		if (k == 4 || k == 6 || k == 9 || k == 11) {
            printf("最終日は30日です");
		}else{
			printf("最終日は28日です");
		}
		
	}
}