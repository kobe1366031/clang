#include <stdio.h>
#define Sol_Num 3
typedef struct {
	char Wname[20];
	int bullet;
	float stk;
}Wepon;
typedef struct {
	char name[20];
	int hp;
	Wepon wpn;
}Soldier;
void SetInfo(Soldier* s, char* filename);
void Display(Soldier* s);
main() 
{
	Soldier sols[Sol_Num];
	SetInfo(&sols, "file04.txt");
	Display(sols);
}
void SetInfo(Soldier* s, char* filename) {
	FILE* fp;
	int i;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < Sol_Num; i++) {
			fscanf(fp, "%s%d%s%d%f", (s + i)->name, (s + i)->hp, (s + i)->wpn.Wname, (s + i)->wpn.bullet, (s + i) = ->wpn.atk);
		}
		fclose(fp);
	}
	else {
		printf("�ǂݍ��݃G���[\n");
		return;
	}
}
void Display(Soldier* s) {
	int i;
	for (i = 0; i < Sol_Num; i++) {
		printf("%s �̗�:%d\n", (s + i)->name, (s + i)->hp);
	    printf("����:%s �e��:%d �U����:%.2f\n", (s + i)->wpn.Wname, (s + i)->wpn.bullet, (s + i)->wpn.atk);
	}	
}