//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
int power(int a, int b)
{
	int i = 0;
	int result = 1;
	for (i = 0;i < b; i++)
	{
		result *= a;
	}
	return result;
}
int main()
{
	int a=power(1,2);
	int b = power(2, 2);
	int c = power(3, 2);
	int d = power(4, 2);
	int e = power(5, 2);
	printf("%d", a + b + c + d + e);
	return 0;
}
