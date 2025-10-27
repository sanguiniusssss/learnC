//202510125115
//yang11429@outlook.com
//杨润
#include <stdio.h>
int main()
{
	int n = 0;
	int j = 0;
	int i = 0;
	int k = 0;
	int a = 0;
	for (n = 100; n <= 999; n++)
	{
		j = n / 100;
		k = n % 100 / 10;
		i = n %10;

		if (j* j* j + k * k * k + i * i * i ==n)
		{
			if (a == 1)
			{
				printf(" ");
			}
			printf("%d", n);
			a = 1;
		}
	}
	return 0;
}
