#include <math.h>
#include <stdio.h>
int main ()
{
	int n, i, z;
	float s;
	do
	{
		z=0;
		printf ("Podaj liczbe: ");
		scanf("%d",&n);
		s=sqrt(n);
		if (n!=1)
		{
			for (i=2;i<=s;i++)
			{
				
				if (n%i==0)
				{
					z=1;
					if (s==i)
					{
						printf ("%d ", i);
					}
					else
					{
						
						printf ("%d, %d, ", i, n/i);
					}	
				}
			}
			if (z==0)
			{
				printf ("Jest to liczba pierwsza.\n");
			}
		}
		else
		{
			z=1;
			if(n==1)
				printf ("%d ", n);
		}
	}
	while(z!=0);
	return 0;
}
