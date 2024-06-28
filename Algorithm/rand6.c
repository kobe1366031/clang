#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int pl, cpu;
	printf("何を出しますか？\n");
	printf("(1:グー　2:チョキ　3:パー)>");
	scanf("%d", &pl);
	if (pl == 1) {
		printf("プレイヤーはグーです\n");
	}
	if (pl == 2) {
		printf("プレイヤーはチョキです\n");
	}
	if (pl == 3) {
		printf("プレイヤーはパーです\n");
	}
	/* switch (pl){
	case 1: ....*/
	srand(time(0));
	cpu = rand() % 3;
	if (cpu == 0) {
		printf("コンピューターはグーです\n");
	}
	if (cpu == 1) {
		printf("コンピューターはチョキです\n");
	}
	if (cpu == 2) {
		printf("コンピューターはパーです\n");
	}
	//プレイヤー勝ちパターン
	if ((pl - cpu + 3) % 3 == 0) {
	}
	//プレイヤーあいこパターン
	if ((pl - cpu + 3) % 2 == 0) {

	}
}