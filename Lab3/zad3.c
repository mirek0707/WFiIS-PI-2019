#include <stdio.h>
#include <string.h>
int main ()
{
	
	int i=0, n, w;
	printf("Podaj liczbe: ");
	while (i<1)
	{
		scanf ("%d",&n);
		if (n>=0)
		{
			w=(n>>8);
			w!=0?printf("zla liczba, podaj jeszcze raz: "):i++;
		}
		else
		{
			w=(n<<8);
			w!=0?printf("zla liczba, podaj jeszcze raz: "):i++;
		}
		
	}
	w=n;
	for (i=7;i>=0;i--)
	{
		w = n >> i;
	    if (w & 1)
	      printf("1");
	    else
	      printf("0");
	}
	printf("\n");

	return 0;
}
