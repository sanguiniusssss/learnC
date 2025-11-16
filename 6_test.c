//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
#include<stdlib.h>
int main() {
	int* ptr = (int*)malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++) {
		scanf("%d", ptr + i);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(ptr + i));
	}
	printf("\n");
	free(ptr);
	return 0;
}
