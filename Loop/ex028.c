#include <stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	printf("数を入れて");
	scanf("%d", &ia);
	// ia　が　-999 じゃない間は繰り返す
	while (ia != -999) {
		gokei += ia; // gokei　に ia を足し込む
		printf("数を入れて");
		scanf("%d", &ia);
	}
	printf("合計=%d\n", gokei);
}