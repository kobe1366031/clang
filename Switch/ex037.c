#include <stdio.h>
main()
{
	char opc;

	printf("���Z�q�����:");
	scanf("%c", &opc);


	switch (opc) 
	{
	     case '+':
			printf("���Z�ł�\n");
			break;

		 case '-':
			printf("���Z�ł�\n");
			break;

		 case '*':
			printf("��Z�ł�\n");
			break;

		 case '/':
			printf("���Z�ł�\n");
			break;

		 case '%':
			printf("���܂�ł�\n");
			break;

		 default:
		    printf("���̑��ł�\n");
	}
		
}