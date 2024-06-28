#include <stdio.h>
main()
{
	int num, K;
	num = 0;

	//無限ループ
	while (1) {
		printf("数を入れて:");
	    scanf("%d", &K);

		//breakを呼び出す
		if (K == -999) { break; }

		//加算
		num += K;
	}
	
	printf("合計=%d", num);

}