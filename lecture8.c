#include <stdio.h>
int main()
{
	int jumsu;
	printf("점수 입력 :");
	scanf_s("%d", &jumsu);
	if (jumsu > 100 || jumsu < 0)
	{
		printf("잘못 입력했습니다.\n");
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