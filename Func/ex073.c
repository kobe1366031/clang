#include <stdio.h>
void error_msg(void);
main()
{
	int a, b;
	printf("data1 data2 ?:");
	scanf("%d%d", &a, &b);
	if (b == 0) 
	{
		//�����Ȃ��̊֐����Ăяo���Ƃ���()����
		//���������Ȃ�
		error_msg();
	}
	else {
		printf("%d/%d=%d�E�E�E%d\n", a, b, a / b, a % b);
	}
}
void error_msg(void) 
{
	printf("0�͊���Z�ł��܂���\n");
	return;//�߂�l�Ȃ��̂Ƃ��͏ȗ��\
}