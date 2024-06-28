#include <stdio.h>
main()
{
	int ap[2][2][3] = {
		{{3,4,5},{4,5,6}},
		{{2,2,3},{2,5,6}}
	};
	int gokei, i, j, k;

	gokei = 0;

	for (i = 0; i < 2; i++) //アパート数分ループ
	{
		printf("アパート%d", i + 1);
		for (j = 0; j < 2; j++) //階段分ループ
		{
			printf("(%d階) :", j + 1);
			for (k = 0; k < 3; k++) //号室数文ループ
			{
				printf("%d", ap[i][j][k]);
				gokei += ap[i][j][k];
			}
		}
		printf("\n");
	}

	printf("全体で%d人住んでいます\n", gokei);
}