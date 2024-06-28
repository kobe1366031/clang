#include <stdio.h>
void error_msg(void);
main()
{
	int a, b;
	printf("data1 data2 ?:");
	scanf("%d%d", &a, &b);
	if (b == 0) 
	{
		//引数なしの関数を呼び出すときは()内は
		//何も書かない
		error_msg();
	}
	else {
		printf("%d/%d=%d・・・%d\n", a, b, a / b, a % b);
	}
}
void error_msg(void) 
{
	printf("0は割り算できません\n");
	return;//戻り値なしのときは省略可能
}