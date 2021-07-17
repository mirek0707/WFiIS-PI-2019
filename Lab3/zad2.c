#include <stdio.h>
#include <string.h>
int main ()
{
	
	char b[64];
	int i, n, w=0;
	printf("Podaj liczbe binarna: ");
	scanf ("%s",b);
	n=strlen(b);
	for (i=0;i<n;i++)
	{
		w=w*2;
		w=w+b[i]-'0';
	}
	printf("\n%d",w);
	return 0;
}
