#include <stdio.h>
main()
{
	char data[100];
	int cnt, i;
	printf("�񐔂ƕ���������:");
	scanf("%d%s", &cnt, data);
	for (i = 0; i < cnt; i++) {
		printf("%s\n", data);
	}
}