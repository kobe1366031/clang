#include <stdio.h>
main()
{
	char data[] = "Apple";
	int i;
	printf("1文字ずつ表示\n");
	i = 0;
	while (data[i] != '\0') {
		printf("%c", data[i]);
		i = i + 1;
	}
	printf("\n文字列表示\n");
	printf("%s", &data[0]);	
}