#include <stdio.h>

enum BitState
{
	Base = 0,
	Poison=1<<0,
	Sleep=1<<1,
	Paralysis=1<<2, 
	Burn=1<<3,     
	AtkUp=1<<4,    
	AtkDown=1<<5   
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UINT s){
	printf("****���݂̏��****\n");
	if (s & Poison) {
		printf("��\n");
	}
	if (s & Sleep) {
		printf("����\n");
	}
	if (s & Paralysis) {
		printf("���\n");
	}
	if (s & Burn) {
		printf("�Ώ�\n");
	}
	if (s & AtkUp) {
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown) {
		printf("�U���̓_�E��\n");
	}
	if (s == Base) {
		printf("�������\n");
	}
	printf("******************\n");
}	
void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�Ł@2:�����@3:��Ⴡ@4:�Ώ��@5:�U�����@6:�U�����@0:���͏I��>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default://1�`6�ɓ��Ă͂܂�Ȃ��Ƃ�
			break;
		}
	}
}
void ClearFlag(UINT* s) {
	int a;
	while (1) {
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("1:�Ł@2:�����@3:��Ⴡ@4:�Ώ��@5:�U�����@6:�U���� 7:�O�񕡁@0:���͏I��>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (1) {
			case 1;
				*s &= �`Poison;
				break;
			case 2:
				*s &= �`Sleep;
				break;
			case 3:
				*s &= �`Paralysis;
				break;
			case 4:
				*s &= �`Burn;
				break;
			case 5:
				*s &= �`AktUp;
				break;
			case 6:
				*s &= �`AktDown;
				break;
			case 7:
				*s &= Base;
			default:
				break;
		}
	}
}
