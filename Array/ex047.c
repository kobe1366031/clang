#include <stdio.h>
main()
{
	float x[3][2];
	int i, j;
	float gokei;

	for (i = 0; i < 3; i++)//行方向分のループ
	{
		gokei = 0;
		for (j = 0; j < 2; j++)//列方向分のループ
		{
			printf("x[%d][%d] = ", i, j);
			scanf("%f", &x[i][j]);
			gokei += x[i][j];
		}

	     //printf("%d行目の平均　= %.2f\n",i,(x[i][0] + x[i][1]));
		printf("%d行目の平均 = %.2f\n\n", gokei / j);
	}
}
