#include <stdio.h>
main()
{
	//整数型変数
	int no1, no2;
	//(一つ目の整数:)と表示
	printf("一つ目の整数:");
	//キーボードから整数を入力し、not1に代入
	scanf("%d", &no1);
	//(二つ目の整数:)と表示
	printf("二つ目の整数:");
	//キーボードから整数を入力し、not2に代入
	scanf("%d", &no2);
	//変数not1とnot2の加算結果を表示
	printf("合計は%dです \n", no1+no2);
}