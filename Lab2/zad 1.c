#include<stdio.h>
int main ()
{
	int n, k, i=0, j;
	do 
	{
		printf ("Podaj liczbe  ");
		scanf("%d", &n); 
		
	}
	while (n<0||n>9);
	for (i=0;i<=n;i++)
	{
		for (k=n;k>=n-i;k--)
		{
			if (k==n)
				printf ("%*d", n-i+1, k);
			else
				printf ("%d", k);
		}
		printf (" ");
		for (j=n-i-1;j>=0;j--)
		{
			printf ("%d", j);
		}
		printf("\n");
	}
	return 0;
	
}
