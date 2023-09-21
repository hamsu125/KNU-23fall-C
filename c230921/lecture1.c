#include <stdio.h>
int main()
{
	int a;
	printf("소수인지 확인할 수를 입력하세요 :");
	scanf_s("%d", &a);
	math(a);
	return 0;

}
int math(int n)
{
	int sum=0;
	for (int i = 2; i <n; i++)
	{
		if (n % i == 0) sum++;
	}
	if (sum == 0) printf("해당 수는 소수입니다.");
	else printf("해당 수는 소수가 아닙니다.");
}