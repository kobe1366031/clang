#include <stdio.h>
main()
{
	char data1[100] = "banana", data2[100] = "peach", data3[100];
	int i;
	printf("������1�����:");
	scanf("%s", &data1);
	printf("������2�����:");
	scanf("%s", &data2);

	printf("moji1=%s \n moji2=%s\n", data1, data2);
	printf("����ւ����\n");
	for (i = 0; data3[i] = data1[i]; i++);
	for (i = 0; data1[i] = data2[i]; i++);
	for (i = 0; data2[i] = data3[i]; i++);
	printf("moji1=%s \n moji2=%s\n", data1, data2);
}