#include <stdio.h>
main()
{
	char go, ro;
	/*変数goに'5'を代入*/
	go = '5';
	/*変数roに'6'を代入*/
	ro = '6';
	/*5*6の結果をgoとroの演算を使って%dで表示*/
	printf("5*6=%d \n", (go-48) * (ro-48));	
}