#include <stdio.h>
main()
{
	int ap[2][2][3] = {
		{{3,4,5},{4,5,6}},
		{{2,2,3},{2,5,6}}
	};
	int gokei, i, j, k;

	gokei = 0;

	for (i = 0; i < 2; i++) //�A�p�[�g�������[�v
	{
		printf("�A�p�[�g%d", i + 1);
		for (j = 0; j < 2; j++) //�K�i�����[�v
		{
			printf("(%d�K) :", j + 1);
			for (k = 0; k < 3; k++) //�����������[�v
			{
				printf("%d", ap[i][j][k]);
				gokei += ap[i][j][k];
			}
		}
		printf("\n");
	}

	printf("�S�̂�%d�l�Z��ł��܂�\n", gokei);
}