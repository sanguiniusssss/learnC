//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int a = 0;
	int k = 0;
	int arr[5] = {0};
	while(i<5)
	{
		scanf("%d",&j);
		if (j % 2 == 0)
		{
			arr[i] = j;
			i++;
		}
		
	}
	for (k = 0; k < 5; k++)
	{
		if (a == 1)
		{
			printf(" ");
		}
		printf("%d", arr[k]);
		a = 1;
	}
	return 0;
}
