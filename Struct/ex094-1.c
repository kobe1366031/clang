#include <stdio.h>
#include <string.h>

#define NIN 5


struct day {
	int nen;
	int tuki;
	int hi;
};

struct profile {
	char name[20];
	struct day data;
	char blood[5];
};

main()
{
	struct profile data[NIN] = { {"AAAAA",2000,1,1,"A"},{"BBBBB",1999,2,28,"B"},{"CCCCC",1998,5,1,"O"},{"DDDDD",1997,12,31,"AB"},{"EEEEE",1996,2,1,"A"} };

	struct profile* p;
	int i;

	for (p = data, i = 0; i < NIN; i++, p++) 
	{
		if (p->date, tuki == 2) 
		{
			printf("%s - %d�N%d��%d���� ���t�^ - %s�^\n", p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}
	}
}