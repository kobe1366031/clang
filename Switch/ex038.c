#include <stdio.h>
main()
{
	int apc;

	printf("���������:");
	scanf("%d", &apc);

	if (apc >= 10 && apc <= 49)
	{

		switch (apc / 10)
		{
		    case 1:
			   printf("10�_��ł�\n");
			   break;

		    case 2:
			   printf("20�_��ł�\n");
			   break;

		    case 3:
			   printf("30�_��ł�\n");
			   break;

		    case 4:
			   printf("40�_��ł�\n");
		}
	}
	else 
	{
		printf("�G���[:10�`49�͈̔͂���͂��Ă�������\n");
	}
}