#include <stdio.h>
int main ()
{
	int i, licz=0;
	for (i=-5;i<99;i++)
	{
		if (i%4==0&&i%5!=0)
		{
			licz++;
			printf ("%d, ", i);
		}
	}
	printf ("\nJest ich: %d.\n", licz);
	return 0;
}
