#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int gacha;
	srand(time(0));


	if (gacha >= 50) {
		printf("���m�[�}��\n");
	}
	else {
		if (gacha >= 20) {
			printf("�������A\n");
		}
		else {
			if (gacha >= 6) {
				printf("������SR\n");
			}
			else{
				if (gacha >= 2) {
					printf("��������UR\n");
				}
				else {
					if (gacha >= ) {
						printf("����������LR\n");
					}
				}
			}
		}
	}
}