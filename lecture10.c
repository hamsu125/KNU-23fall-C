#include <stdio.h>
int main()
{
	int i, j; 
	for (i = 2; i <= 9; i++)
	{
		if (i == 5) i = 6;
		for (j = 2; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}