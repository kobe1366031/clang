#include <stdio.h>
#define TBL_END 5
int tbl_gokei4(int* p);/*�v���g�^�C�v�錾*/
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei4(a);/*�֐�tbl_gokei4�̌Ăяo��*/
	printf("gokei=%d\n", gokei);
}

/*�֐�tbl_gokei4�̋L�q*/
int tbl_gokei4(int* p) 
{
	int gokei, i;

	for (gokei = 0, i = 0; i < TBL_END; i++) {
		gokei += *(p + i);
	}
	return gokei;
}