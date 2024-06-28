#include <stdio.h>
main()
{
	int i, j,gokei;

	//配列の先頭要素のみ省略できる
	int a[][3] = {
		{10,20,30},
		{ 1, 2, 3}
	};

	for (i = 0; i < 2; i++)//2行分ループ 
	{
		for (gokei = 0, j = 0; j < 3; j++) 
		{
			printf("a[%d][%d] = %d\n", i, a[i][j]);
			gokei += a[i][j];
		}
		printf("%d行目の合計 = %d\n\n", gokei);
	}
}