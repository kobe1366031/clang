#include<stdio.h>
main()
{
	int su, cnt;


	//su‚ğ“ü—Í
	printf("”‚ğ“ü‚ê‚Ä");
	scanf("%d", &su);

	cnt = 0;
	while (cnt <= 10) {
		printf("%d+%d=%d\n", su, cnt, su + cnt);
		cnt++;//ƒCƒ“ƒNƒŠƒƒ“ƒg
	}
}