#include <stdio.h>
main()
{
	int a = 100, b = 200, w;
	int *p_a, *p_b;

	printf("実行前:a = %d b = %d\n", a, b);

	p_a = &a;
	p_b = &b;

	//入れ替える(ポインタ変数を使用)
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;


	printf("実行後:a=%d b=%d\n", a, b);
}