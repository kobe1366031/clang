#include <stdio.h>
#include <stdlib.h>//�������g���Ƃ��ɕK�v�ł�
#include <time.h>//�������g���Ƃ��ɕK�v�ł�

main()
{
	int kazu;

	srand(time(0));//������������(�V���b�t��)����
	kazu = rand();//0-32767�͈̔͂ŗ��������߂�
	printf("��������������%d�ł�\n", kazu);
}