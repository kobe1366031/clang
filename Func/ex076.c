#include <stdio.h>
//�֐��v���g�^�C�v�錾
void calculate(int a, int b, int *p_sum, float *p_ave);

main()
{
	int a, b, sum;
	float ave;


	//����
	printf("���l��2����:");
	scanf("%d%d", &a, &b);


	//�֐��Ăяo��
	calculate(a, b, &sum, &ave);


	//���ʕ\��
	printf("���v��%d�A����%.2f\n", sum, ave);
}


void calculate(int a, int b, int* p_sum, float* p_ave)
{
	*p_sum = a + b;
	*p_ave = (a + b) / 2.0;
	return;
}