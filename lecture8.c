#include <stdio.h>
int main()
{
	int jumsu;
	printf("���� �Է� :");
	scanf_s("%d", &jumsu);
	if (jumsu > 100 || jumsu < 0)
	{
		printf("�߸� �Է��߽��ϴ�.\n");
		return 0;
	}
	switch (jumsu/10)
	{
		case 10:
		case 9 :
			printf("A");
			break;
		case 8 :
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
	default:
		printf("F");
		break;
	}
	return 0;
}