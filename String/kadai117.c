#include <stdio.h>
#define WEEK
main()
{
�@�@char *day[]={"sunday","monday"}

	char** p = day;
	int i;
	//�p�^�[���@�@day[i]�̌`���ŕ������\��
	for (i = 0; i < WEEK; i++) {
		printf("%s\n", *day[i]);
	}
	//�p�^�[���A-1 *p��p���ĕ������\��
	for (i = 0; i < WEEK; i++) {
		printf("%s\n", *(p + i));
	}
	//�p�^�[���A-2
	while (*p) {
		printf("%s\n", *p++);
	}
}