#include <stdio.h>
main()
{
	int men = 0;//入力用
	int san = 0;//合計値用
	int cnt = 0;//カウント用

	do 
	{
		san += men;//加算
		cnt++;

		printf("整数(-999で終了)");
		scanf("%d", &men);
	} while (men != -999);

	cnt--;//最初の1回分を引く

	printf("合計=%d\n", san);

	printf("平均=%f\n", (float)san / (float)cnt);
}