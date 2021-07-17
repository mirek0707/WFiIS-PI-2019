#include<stdio.h>
#include <stdlib.h>
#include <time.h> 
int main ()
{
	float T[21]={0};
	int i, a;
	time_t czas;   
 	srand( (unsigned int)time(&czas) );
	for (i=0;i<1000;i++)
	{
		a=0 + rand()%(20-0+1);
		T[a]++;
	}
	for (i=0;i<21;i++)
	{
		printf("%d : %3.1f%%\n", i, T[i]/10.0);
	}
	return 0;
}
int main ()
{
	float T[21]={0};
	int i, a;
	time_t czas;   
 	srand( (unsigned int)time(&czas) );
	for (i=0;i<1000;i++)
	{
		a= rand()%(10+10+1)-10;
		T[a+10]++;
	}
	for (i=0;i<21;i++)
	{
		printf("%d : %3.1f%%\n", i-10, T[i]/10.0);
	}
	return 0;
}
