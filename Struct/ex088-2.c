#include <stdio.h>
#include <string.h>
struct syohin_data {
	char name[20];
	int tanka;
}syohin1, syohin2;
//�\���̂̐錾�Ɠ����ɍ\���̕ϐ���錾
main()
{
	strcpy(syohin1.name, "�G���s�c");
	syohin1.tanka = 30;
	syohin2 = syohin1;
	printf("syohin1.name=%s\n", syohin1.name);
	printf("syohin1.tanka=%d\n", syohin1.tanka);
	printf("syohin2.name=%s\n", syohin2.name);
	printf("syohin2.name=%d\n", syohin2.tanka);
}