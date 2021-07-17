#include<stdio.h>
int main ()
{
	float e, s=0, n;
	int i;
	do 
	{
		printf ("Podaj dokladnosc:  ");
		scanf("%f", &e); 
		
	}
	
	while (e<=0||e>=1);
	n=1;
	for (i=n;n>=e;i++)
	{
		s=s+n;
		n=(1.0/(1+i));
	}
	printf ("%f",s);
	return 0;
}
