#include <stdio.h>
main()
{
	char data1[100] = "int a[10]=10,20,30,40,50,60,70,80,90,100", data2[100] = "int b[10]=100,200,300,400,500,600,700,800,900,1000", data3[100];
	int i;

	printf("配列a=%s \n 配列b=%s\n", data1, data2);
	printf("配列aと配列bを交換すると\n");
	for (i = 0; data3[i] = data1[i]; i++);
	for (i = 0; data1[i] = data2[i]; i++);
	for (i = 0; data2[i] = data3[i]; i++);
	printf("配列a=%s \n 配列b=%s\n", data1, data2);
}