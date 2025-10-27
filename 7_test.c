//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
int main()
{
	int i = 0;
	int num[5] = { 0 };
	int a = 0;
	for (i = 0; i <4; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 4; i >0; i--)
	{
		num[i] = num[i-1];
	}
	num[0] = 0;
	for (i = 0; i < 5; i++)
	{
		if (a == 1)
		{
			printf(" ");
		}
		printf("%d", num[i]);
		a = 1;
	}
	return 0;
}
