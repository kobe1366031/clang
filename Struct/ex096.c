#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};

void display3(struct syohin_data* sp);

main()
{
	struct syohin_data syohin = { "�P�V�S��",50 };
	display3(&syohin);
}

void display3(struct syohin_data* sp)
{
	printf("syohin->name= %s syohin->tanka= %d\n", sp->name, sp->tanka);
}