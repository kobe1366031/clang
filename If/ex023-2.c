#include <stdio.h>
main()
{
	int u;
	printf("西暦を入力:");
	scanf("%d", &u);
	if (u % 400 == 0) {
		printf("うるう年です");
	}
	else {
		if (u%4==0){
			if (u % 100 != 0) {
			printf("うるう年です");
		}
		else {
		    printf("平年です");
		}
	
　　
		}
		else{
			printf("平年です")
}

	
