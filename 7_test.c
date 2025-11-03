//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
void Return(int arr[], int length)
{

	int temp = 0;
	int j = 0;

	for (j = 0; j < length / 2; j++)
	{
		temp = arr[j];
		arr[j] = arr[length - 1 - j];
		arr[length - 1 - j] = temp;
	}
}
int main()
{
	int arr[5] = { 0 };
	int i = 0;
	int a = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	Return(arr,5);
	for (i = 0; i < 5; i++)
	{
		if (a == 1)
		{
			printf(" ");
		}
		printf("%d", arr[i]);
		a = 1;
	}
	return 0;
}
