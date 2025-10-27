//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	int arr[5] = {0};
	int a = 0;
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];	
	}
	arr[4]=sum;
	for (i = 0; i < 5; i++)
	{
		if (i == 5)
		{
			continue;
		}
		if (a ==1)
		{
			
			printf(" ");
		}
		printf("%d", arr[i]);
		a = 1;
	}
	return 0;
