#include <stdio.h>
//関数プロトタイプ宣言
void maxmin(int a, int b, int c, int* p_max, int* p_min);
main()
{
	int a, b, c, max, min;

	//入力
	printf("整数を3つ入力:");
	scanf("%d%d%d", &a, &b, &c);

	//関数呼び出し
	maxmin(a, b, c, &max, &min);

	//結果表示
	printf("最大値=%d   最小値=%d\n", max, min);
}

//関数定義
void maxmin(int a, int b, int c, int* p_max, int* p_min) 
{
	//最小値を求める
	//仮の最小値としてaをminに入れる
	*p_min = a;

	//bと比較してbが小さい場合はminに入れる
	if (b < *p_min) 
	{
		*p_min = b;
	}

	//cと比較してcが小さい場合はminに入れる
	if (c < *p_min) 
	{
		*p_min = c;
	}
}