#include <stdio.h>
main()
{
	int a, k = 0, ret, cnt = 0;
	
	printf("����:");
	while (scanf("%d", &a) != EOF) {
		k += a;
		cnt++;
		printf("����:");
	}
	
	
	
	/*printf("����:");
	ret = scanf("%d", &a);
	while (ret != EOF) {
		k += a;
		cnt++;
		printf("����:");
		ret = scanf("%d", &a);
	}*/

	printf("���v=%d ����=%.2f\n", k, (float)k / cnt);
	

}