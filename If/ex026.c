#include <stdio.h>
main()
{
	int k;
	printf("�������:");
	scanf("%d", &k);
	if (k == 1 || k == 3 || k == 5 || k == 7 || k == 8 || k == 10 || k == 12) {
		printf("�ŏI����31���ł�");
	}
	else{
		if (k == 4 || k == 6 || k == 9 || k == 11) {
            printf("�ŏI����30���ł�");
		}else{
			printf("�ŏI����28���ł�");
		}
		
	}
}