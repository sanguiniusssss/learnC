//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
int push(int ptr_arr[], int len)
{
	int i = 0;
	int* p = ptr_arr;

	for (i = len-1; i >0 ; i--)
	{
		*(p + i) = *(p + i - 1);
	}
	*p = 0;
}
int main()
{
	int arr[5] = { 0 };
	int i = 0;
	int* p = arr;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		scanf("%d", p);
		p++;
	}
	push(arr, 5);
	p = arr;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}
