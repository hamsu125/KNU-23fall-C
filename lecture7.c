#include <stdio.h>
int main()
{
	int jumsu;
	printf("���� �Է� : ");
	scanf_s("%d", &jumsu);
	if (jumsu >= 90) printf("A ���� �Դϴ�.");
	else if (jumsu >= 80) printf("B ���� �Դϴ�.");
	else if (jumsu >= 70) printf("C ���� �Դϴ�.");
	else if (jumsu >= 60) printf("D ���� �Դϴ�.");
	else if (jumsu < 60) printf("F ���� �Դϴ�.");
	else if (jumsu < 0 || jumsu>100) printf("�߸� �Է��Ͽ����ϴ�.");

	return 0;
}