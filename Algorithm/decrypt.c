#include <stdio.h>
main()
{
	char s[50];
	int i;

	printf("暗号化文字列を入力して下さい>");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0') {
		s[i] = s[i] - 1;
		i++;
	}
	printf("復号済み文字列は%s\n", s);
}