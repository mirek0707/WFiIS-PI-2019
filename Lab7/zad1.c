#include<stdio.h>
int find(int *tab, int ile, int x)
{
	int *srodek;
	int *koniec;
	srodek=tab+ (ile/2);
	koniec=tab+ile-1;
	if (x<*tab)
		return 0;
	else if (x>*koniec)
		return 0;
	else if (x>*srodek)
		return find (srodek,(ile-(ile/2)),x); 
	else if (x<*srodek)
		return find (tab,(ile-(ile/2)),x);
	else if (x==*srodek)
		return 1;
	return 0;
}
int main ()
{
	int tab_A[] = {1,3,5,6,7,9,11,13,16,22,25,34,35,36,37,45,46,47,47,47,55,56,58,59};
	int ile= sizeof(tab_A)/sizeof(int); 
	printf ("%d \n",find(tab_A,ile,59));
	return 0;
}
