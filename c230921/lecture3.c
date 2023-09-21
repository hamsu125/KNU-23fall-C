#include <stdio.h>
int main()
{
	int n;
	printf("계산할 팩토리얼 값 입력 : ");
	scanf_s("%d", &n);
	printf("%d! = %d", n, math(n));
	return 0;
}
int math(int n)
{
	if (n == 1) return 1;
	return n*math(n-1);
	
}