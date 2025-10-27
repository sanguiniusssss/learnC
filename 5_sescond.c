//202510125115
//yang11429@outlook.com
//杨润
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int isPrime = 1;
	if(n<=50)
	{ 
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1)
		{
			printf("密钥安全，密码设置成功\n");
		}
		else
		{
			printf("密钥不安全，请重新输入");
		}
	}
	return 0;
}
