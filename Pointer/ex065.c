#include <stdio.h>
#include <string.h>
#define CNT 4
main()
{
	char* p_tdl[] = { "Programming2","Algorithm"
		            ,"Programming1","C" }, * w;
	int i, j;
	for (i = 0; i < CNT - 1; i++) {
		for (j = i + 1; j < CNT; j++) {
			if (strcmp(p_tdl[i], p_tdl[j]) > 0) {
				w = p_tdl[i];
				p_tdl[i] = p_tdl[j];
				p_tdl[j] = w;
			}
		}
	}
	for (i = 0; i < CNT; i++) {
		printf("%s\n", p_tdl[i]);
	}
}