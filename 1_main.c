//202510125115
//yang11429@outlook.com
//杨润
#include <stdio.h>
int main() {
	int n = 0;
	int a = 0;
	int isSafe = 0;
	scanf("%d", &n);
	if (n < 50&&n>1)
	{
	for (a = 1; a <= 50; a++) {
		if (n % a == 0) 
		{ 
			isSafe = 1;
			break;
		}
	}
	if (isSafe) {
		printf("密钥安全，密码设置成功\n");
	}
	else {
		printf("密钥不安全，请重新输入\n");
	}
	}
	return 0;
}
