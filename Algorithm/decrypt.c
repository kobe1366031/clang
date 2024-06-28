#include <stdio.h>
main()
{
	char s[50];
	int i;

	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢>");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0') {
		s[i] = s[i] - 1;
		i++;
	}
	printf("•œ†Ï‚İ•¶š—ñ‚Í%s\n", s);
}