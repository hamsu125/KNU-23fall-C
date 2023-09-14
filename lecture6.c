#include <stdio.h>
int main(void)
{
	int a;
	printf("정수 입력 : ");
	scanf_s("%d", &a);
	if (a > 0) printf("양의 정수 입니다.");
	else if (a < 0) printf("음의 정수 입니다.");
	else if (a == 0) printf("0 입니다.");
	return 0;
}