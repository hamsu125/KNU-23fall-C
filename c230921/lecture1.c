#include <stdio.h>
int main()
{
	int a;
	printf("�Ҽ����� Ȯ���� ���� �Է��ϼ��� :");
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
	if (sum == 0) printf("�ش� ���� �Ҽ��Դϴ�.");
	else printf("�ش� ���� �Ҽ��� �ƴմϴ�.");
}