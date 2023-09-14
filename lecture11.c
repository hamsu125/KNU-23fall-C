#include <stdio.h>
int main()
{
	int i= 2, j=1;
	while (i <= 9)
	{
		if (i == 5) i = 6;
		while (j <= 9)
		{
			printf("%d x %d = %d\n", i, j, i * j);
			j++;
		}
		printf("\n");
		i++;
		j = 1;
	}
	return 0;
}