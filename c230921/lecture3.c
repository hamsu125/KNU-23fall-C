#include <stdio.h>
int main()
{
	int n;
	printf("����� ���丮�� �� �Է� : ");
	scanf_s("%d", &n);
	printf("%d! = %d", n, math(n));
	return 0;
}
int math(int n)
{
	if (n == 1) return 1;
	return n*math(n-1);
	
}