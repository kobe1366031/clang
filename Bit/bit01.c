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
	printf("****åªç›ÇÃèÛë‘****\n");
	if (s & Poison) {
		printf("ì≈\n");
	}
	if (s & Sleep) {
		printf("êáñ∞\n");
	}
	if (s & Paralysis) {
		printf("ñÉ·É\n");
	}
	if (s & Burn) {
		printf("âŒèù\n");
	}
	if (s & AtkUp) {
		printf("çUåÇóÕÉAÉbÉv\n");
	}
	if (s & AtkDown) {
		printf("çUåÇóÕÉ_ÉEÉì\n");
	}
	if (s == Base) {
		printf("èâä˙èÛë‘\n");
	}
	printf("******************\n");
}	
void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		printf("Ç«ÇÃèÛë‘Ç…ÇµÇ‹Ç∑Ç©ÅH\n");
		printf("1:ì≈Å@2:êáñ∞Å@3:ñÉ·ÉÅ@4:âŒèùÅ@5:çUåÇÅ™Å@6:çUåÇÅ´Å@0:ì¸óÕèIóπ>");
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
		default://1Å`6Ç…ìñÇƒÇÕÇ‹ÇÁÇ»Ç¢Ç∆Ç´
			break;
		}
	}
}
void ClearFlag(UINT* s) {
	int a;
	while (1) {
		printf("Ç«ÇÃèÛë‘ÇâèúÇµÇ‹Ç∑Ç©ÅH\n");
		printf("1:ì≈Å@2:êáñ∞Å@3:ñÉ·ÉÅ@4:âŒèùÅ@5:çUåÇÅ™Å@6:çUåÇÅ´ 7:ëOâÒï°Å@0:ì¸óÕèIóπ>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (1) {
			case 1;
				*s &= Å`Poison;
				break;
			case 2:
				*s &= Å`Sleep;
				break;
			case 3:
				*s &= Å`Paralysis;
				break;
			case 4:
				*s &= Å`Burn;
				break;
			case 5:
				*s &= Å`AktUp;
				break;
			case 6:
				*s &= Å`AktDown;
				break;
			case 7:
				*s &= Base;
			default:
				break;
		}
	}
}
