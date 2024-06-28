#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	char s[21];
	int i, no;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢>");
	scanf("%s", &s);
	i = 0;

	while (s[i] != '\0') {
		printf("s[%d]‚Ì•œ†ƒL[>", i);
		scanf("%d",&no)
		s[i] = s[i] - no;
		i++;
	}
	printf("•¡‡‰»•¶š—ñ‚ÍA%s\n", s);
	
}