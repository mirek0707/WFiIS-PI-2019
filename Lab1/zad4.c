#include <stdio.h>
int main ()
{
	int k, i=0, k5=0, k10=0, k20=0;
	printf ("Podaj kwote: ");
	while (i<1)
	{
		scanf("%d", &k);
		if (k%5==0)
		{
			i++;
		}
		else
		{
			printf ("Blad, podaj inna liczbe: ");
		}
	}
	
	k20=k/20;
	k=k%20;
	k10=k/10;
	k=k%10;
	k5=k/5;
	k=k%5;
	printf ("ilosc 20: %d \nilosc 10: %d \nilosc 5:%d", k20, k10, k5);
	return 0;
	
}
