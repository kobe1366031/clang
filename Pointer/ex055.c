#include <stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4, };
	float sum = 0, ave;
	int i;
	int* p_a;//�|�C���^�ϐ�
	float* p_b;//�|�C���^�ϐ�

	//p_a��a�z��̐擪�A�h���X������
	p_a = a;

	for (i = 0; i < 6; i++,p_a++)//�f�[�^�������[�v����
	{
		sum += *p_a;
	}
	ave = sum / i;
		printf("�z��a ���v=%f ����=%f\n",sum, ave);
}