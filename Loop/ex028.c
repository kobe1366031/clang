#include <stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	printf("��������");
	scanf("%d", &ia);
	// ia�@���@-999 ����Ȃ��Ԃ͌J��Ԃ�
	while (ia != -999) {
		gokei += ia; // gokei�@�� ia �𑫂�����
		printf("��������");
		scanf("%d", &ia);
	}
	printf("���v=%d\n", gokei);
}