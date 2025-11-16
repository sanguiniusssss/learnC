//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
int main()
{
	int arr[5] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		scanf("%d", p);
		p++;
	}
	p =arr;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		*p *= 2;
		p++;
	}
	p = arr;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ",*p);
		p++;
	}
	return 0;
}
