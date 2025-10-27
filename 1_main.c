//202510125115
//yang11429@outlook.com
//杨润
#include <stdio.h>
#include <stdbool.h>
int main() {
	int n;
	bool isPrime = true;
	scanf("%d", &n);
	if (n <= 0 || n >= 50) 
	{
		return 0;
	}
	if (n == 1) {
		isPrime = false;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			isPrime = false; 
			break;
		}
	}
	if (isPrime) {
		printf("密钥安全，密码设置成功\n");
	}
	else {
		printf("密钥不安全，请重新输入\n");
	}
	return 0;
}
