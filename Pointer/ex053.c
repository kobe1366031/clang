#include <stdio.h>
main()
{
	int a = 100, b = 200;
	int *p_a,  *p_b,  *p_w;

	p_a = &a;//a�̃A�h���X�����߂�
	p_b = &b;//b�̃A�h���X�����߂�

	printf("���s�O:*p_a=%d *p_b=%d\n", *p_a, *p_b);
	printf("�A�h���X:p_a%d p_b=%d\n\n", p_a, p_b);

	//�|�C���^�ϐ����L�����Ă���A�h���X�����ւ���
	p_w = p_a;
	p_a = p_w;
	p_b = p_a;

	printf("���s��:*p_a=%d *p_b=%d\n", *p_a, *p_b);
	printf("�A�h���X:p_a=%d p_b=%d\n", p_a, p_b);

}