#include <stdio.h>
int AlphaCheck(char cdat);
main()
{
	char c;
	int ret;
	printf("�A���t�@�x�b�g1����?");
	scanf("%c", &c);
	ret = AlphaCheck(c);
	if (ret == 1) {
		printf("�߂�l��%d�Ȃ̂œ��͂��������͑啶���ł�\n", ret);
	}


}