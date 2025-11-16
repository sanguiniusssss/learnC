//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int j = 0;
	int* p = arr;
	int temp = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", p);
		p++;
	}
	p = arr;
	for (i = 0; i < 10 - 1; i++)
	{
		for (j = 0; j < 10 - i - 1; j++)
		{
			if (*(p+j) > *(p + j+1))
			{
				temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}

		}
	}
	p = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}
