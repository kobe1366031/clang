#include <stdio.h>
main()
{
	char data[] = "Language", * p_data, ch;
	int i;

	printf("data[]=%s\n", data);
	printf("検索文字は？");
	scanf("%c", &ch);
	printf("検索結果は、");
	for (p_data = data, i = 0; *(p_data + i) != '\0'; i++){
		if (ch == *(p_data + i)) {
			printf("%d", i + 1);
		}
	}
	printf("文字目です\n");
}