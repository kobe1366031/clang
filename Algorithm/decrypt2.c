#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	char s[21];
	int i, no;
	printf("文字列を入力して下さい>");
	scanf("%s", &s);
	i = 0;

	while (s[i] != '\0') {
		printf("s[%d]の復号キー>", i);
		scanf("%d",&no)
		s[i] = s[i] - no;
		i++;
	}
	printf("複合化文字列は、%s\n", s);
	
}