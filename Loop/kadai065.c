#include <stdio.h>
main()
{
	int men = 0;//���͗p
	int san = 0;//���v�l�p
	int cnt = 0;//�J�E���g�p

	do 
	{
		san += men;//���Z
		cnt++;

		printf("����(-999�ŏI��)");
		scanf("%d", &men);
	} while (men != -999);

	cnt--;//�ŏ���1�񕪂�����

	printf("���v=%d\n", san);

	printf("����=%f\n", (float)san / (float)cnt);
}