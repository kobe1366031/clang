#include <stdio.h>
main()
{
	int num, K;
	num = 0;

	//�������[�v
	while (1) {
		printf("��������:");
	    scanf("%d", &K);

		//break���Ăяo��
		if (K == -999) { break; }

		//���Z
		num += K;
	}
	
	printf("���v=%d", num);

}