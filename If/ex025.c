#include <stdio.h>
main()
{
	char c;
	printf("1���������:");
	scanf("%c", &c);
	
	if (c >= 'A' && c <= 'Z') {
		printf("�啶��");
	}
	else{
		printf("���̑�");
	}
}