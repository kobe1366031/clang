#include <stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4, };
	float sum = 0, ave;
	int i;
	int* p_a;//ポインタ変数
	float* p_b;//ポインタ変数

	//p_aへa配列の先頭アドレスを入れる
	p_a = a;

	for (i = 0; i < 6; i++,p_a++)//データ数分ループする
	{
		sum += *p_a;
	}
	ave = sum / i;
		printf("配列a 合計=%f 平均=%f\n",sum, ave);
}