#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int pl, cpu;
	printf("�����o���܂����H\n");
	printf("(1:�O�[�@2:�`���L�@3:�p�[)>");
	scanf("%d", &pl);
	if (pl == 1) {
		printf("�v���C���[�̓O�[�ł�\n");
	}
	if (pl == 2) {
		printf("�v���C���[�̓`���L�ł�\n");
	}
	if (pl == 3) {
		printf("�v���C���[�̓p�[�ł�\n");
	}
	/* switch (pl){
	case 1: ....*/
	srand(time(0));
	cpu = rand() % 3;
	if (cpu == 0) {
		printf("�R���s���[�^�[�̓O�[�ł�\n");
	}
	if (cpu == 1) {
		printf("�R���s���[�^�[�̓`���L�ł�\n");
	}
	if (cpu == 2) {
		printf("�R���s���[�^�[�̓p�[�ł�\n");
	}
	//�v���C���[�����p�^�[��
	if ((pl - cpu + 3) % 3 == 0) {
	}
	//�v���C���[�������p�^�[��
	if ((pl - cpu + 3) % 2 == 0) {

	}
}