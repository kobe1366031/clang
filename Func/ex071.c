#include <stdio.h>
int gokei(int n1, int n2, int n3);
float heikin(int n1,int n2, int n3);
main()
{
	int a, b, c;
	//int g;
	//float h;
	printf("®”‚ğ3‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);
	//g = gokei(a, b, c);
	//h = heikin(a, b, c);
	printf("‡Œv=%d •½‹Ï=%.2f\n", gokei(a, b, c), heikin(a, b, c));
}
int gokei(int n1,int n2,int n3) {
	//int ans;
	//ans = n1 + n2 + n3;
	return(n1 + n2 + n3);
}
float heikin(int n1,int n2,int n3) {
	//cl exfloat ans;
	//ans = (n1 + n2 + n3) / 3.0;
	return(n1 + n2 + n3) / 3.0;
}

