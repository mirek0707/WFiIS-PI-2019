#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
void sort12( int T[], int r)
{
	int i, j, temp;
	for (i=0;i<r;i++)
	{
		for (j=i+1;j<r;j++)
		{
			if (T[j]%2==0)
			{
				temp=T[i];
				T[i]=T[j];
				T[j]=temp;
			}
		}
	}
}
int main ()
{
	int T[10], r, i;
	r = sizeof(T)/sizeof(int);
	time_t czas;   
	srand( (unsigned int)time(&czas) );
	for (i=0;i<r;i++)
	{
		T[i]=  rand()%(20+1);
		printf ("%d ", T[i]);
	}
	printf ("\n");
	sort12 (T, r);
	for (i=0;i<r;i++)
	{
		printf ("%d ", T[i]);
	}
	printf ("\n");
	return 0;
	
}
