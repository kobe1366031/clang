#include <stdio.h>
main()
{
	int c[11] = { 10,5,30,77,16,3,47,29,37,33,55, };
	int i, s;

	printf("探索値sを入力:");
	scanf("%d", &s);

	for (i = 0; s != c[10]; i++) 
	{ 
		if (s = c[10]) 
		{
			break;
		}
	}

	if (i >= 10) 
	{
		printf("見つからなかった\n");
	}
	else 
	{
		printf("配列%d番目に見つかった\n", i);
	}
}