#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int i, T1[50],T2[50];
	int TW[51];
	time_t czas;
	srand( (unsigned int)time(&czas) ); 
	for (i=0;i<50;i++)
	{
		T1[i]=rand()%(10);
		T2[i]=rand()%(10);
	}
	for (i=0;i<51;i++)
	{
		TW[i]=0;
	}
	for (i=0;i<50;i++)
	{
		printf("%d",T1[i]);
	}
	printf("\n");
	for (i=0;i<50;i++)
	{
		printf("%d",T2[i]);
	}
	printf("\n");
	for (i=49;i>=0;i--)
	{
		TW[i+1]=TW[i+1]+T1[i]+T2[i];
		if (TW[i+1]>=10)
		{
			TW[i+1]=TW[i+1]%10;
			TW[i]=TW[i]+1;
		}
		
	}
	for (i=0;i<51;i++)
	{
		printf("%d",TW[i]);
	}
	return 0;
	
}
