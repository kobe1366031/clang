#include <stdio.h>
//�֐��v���g�^�C�v�錾
void maxmin(int a, int b, int c, int* p_max, int* p_min);
main()
{
	int a, b, c, max, min;

	//����
	printf("������3����:");
	scanf("%d%d%d", &a, &b, &c);

	//�֐��Ăяo��
	maxmin(a, b, c, &max, &min);

	//���ʕ\��
	printf("�ő�l=%d   �ŏ��l=%d\n", max, min);
}

//�֐���`
void maxmin(int a, int b, int c, int* p_max, int* p_min) 
{
	//�ŏ��l�����߂�
	//���̍ŏ��l�Ƃ���a��min�ɓ����
	*p_min = a;

	//b�Ɣ�r����b���������ꍇ��min�ɓ����
	if (b < *p_min) 
	{
		*p_min = b;
	}

	//c�Ɣ�r����c���������ꍇ��min�ɓ����
	if (c < *p_min) 
	{
		*p_min = c;
	}
}