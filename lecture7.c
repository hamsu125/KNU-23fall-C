#include <stdio.h>
int main()
{
	int jumsu;
	printf("점수 입력 : ");
	scanf_s("%d", &jumsu);
	if (jumsu >= 90) printf("A 학점 입니다.");
	else if (jumsu >= 80) printf("B 학점 입니다.");
	else if (jumsu >= 70) printf("C 학점 입니다.");
	else if (jumsu >= 60) printf("D 학점 입니다.");
	else if (jumsu < 60) printf("F 학점 입니다.");
	else if (jumsu < 0 || jumsu>100) printf("잘못 입력하였습니다.");

	return 0;
}