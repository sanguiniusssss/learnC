//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
int sum(int arr[],int length)
{
	int Sum = 0;
	int i = 0;
	for (i = 0; i < length; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
int product(int arr[], int length)
{
	int Product = 1;
	int i = 0;
	for (i = 0; i < length; i++)
	{
		Product *= arr[i];
	}
	return Product;
}
int main()
{
	int arr[5] = {0};
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	int a = sum(arr,5);
	int b = product(arr,5);
	printf("%d %d", a, b);
	
	return 0;
}
