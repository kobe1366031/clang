#include <stdio.h>
main()
{
	char* p_game[] = { "wii","ds","playstation4" };
	char** p;
	int i;
	p = p_game;
	for (i = 0; i < 3; i++) {
		printf("%s\n", *p++);
	}
	printf("p_game[0]:%d\n", p_game[0]);
	printf("p_game[1]:%d\n", p_game[1]);
	printf("p_game[2]:%d\n", p_game[2]);
	printf("*p:%d\n", *p);
	printf("*(p+1):%d\n", *(p + 1));
	printf("*(p+2):%d\n", *(p + 2));
} 
