//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
int sum(int a1, int an,int step)
{
	int i = 0;
	int result = 0;
	for (i = a1; i <= an; i = i + step)
	{
		result += i;
	}
	return result;
}
int main()
{
	int a = sum(1,100,1);
	printf("%d", a);
	return 0;
}
