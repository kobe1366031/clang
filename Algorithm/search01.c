#include <stdio.h>

main()
{
	int c[10] = { 10,5,30,77,16,3,47,29,37,33 };
	int i, s;

	printf("�T���ls�����:");
	scanf("%d", &s);

	//���`�T��(���j�A���T�[�`)
	for (i = 0; i < 10; i++) 
	{
		if (s == c[i]) 
		{
			break;
		}
	}

	if (i == 10) 
	{
		printf("������Ȃ�����\n");
	}
	else 
	{
		printf("�T���l%d���Ad[%d]�Ŕ����I\n", s, i);
	}
}
