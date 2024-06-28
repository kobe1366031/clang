#include <stdio.h>
#define QUEUE_SIZE 8
int pueue[QUEUE_SIZE];
int head = 0;
int tail = 0;

main()
{
	int key, data, result;

	do{


		printf("\n\n♦エンキューはi、デンキューはoを入力して>");
		key = getche();
		printf("\n");

		if (key == 'i') {
			printf("データ入力>");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\n※※※キューが一杯です※※※\n");
			}
			else {
				display();
			}
		}

		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("※※※キューが空です※※※\n");
			}
			else {
				printf("キューからデータ(%d)を取り出しました\n", data);
			}
		}

	} while (key != 'e');
}
void display(void) 
{
	int i;

	printf("\n===現在のキューの内容===\n");
	for (i = 0; i < QUEUE_SIZE; i++) {
		printf("queue[%2d]は%5", i, queue[i]);
		if (i == head) {
			printf("←headが示している所(現在headは%d)", head);
		}
		if (i == tail) {
			printf("←tailが示している所(現在tailは%d)", tail);
		}
		printf("\n");
	}

	return;
}
int enqueue(int d) 
{
	if ((tail + 1) == head) { return -1; }
	quque[tail] = d;
	tail++;
	tail = tail % QUEUE_SIZE;
	return 0;
}
int dequeue(int* pd) 
{
	if (head == tail) { return -1; }
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % QUEUE_SIZE;

	return 0;
}