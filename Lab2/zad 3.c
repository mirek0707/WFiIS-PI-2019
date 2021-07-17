#include <stdio.h>
int main ()
{
	char z;
	int i, j, m=1;
	do 
	{
		printf ("Podaj duza litere:  ");
		scanf(" %c", &z); 
		
	}
	while (z<'A'||z>'Z');
	for (i=0;i<=z-'A';i++)
	{
		
		for (j='A';j<=z-i;j++)
		{
			if (j=='A')
				printf ("%*c", m++, (j));
			else
				printf ("%c", (j));
			
		}
		for (j=j-2;j>='A';j--)
		{
			printf ("%c", (j));
			
		}
		printf ("\n");
	}
	return 0;
}
