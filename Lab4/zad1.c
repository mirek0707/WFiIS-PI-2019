#include<stdio.h>
#include <stdlib.h>
#include <time.h> 
int main ()
{
	float temp, T[10];
	int i;
	time_t czas;   
 	srand( (unsigned int)time(&czas) );
	for (i=0;i<10;i++)
	{
		T[i]=(-100 + (rand()/(1.0 * RAND_MAX)) *(100+100));
		printf("element[%d] = %6.2f\n",i,T[i]);
	}
	printf ("Po zamianie: \n");
	for (i=0;i<5;i++)
	{
		temp=T[i];
		T[i]=T[9-i];
		T[9-i]=temp;
	}
	for (i=0;i<10;i++)
	{
		printf("element[%d] = %+5.2f\n",i,T[i]);
	}
	return 0;
	
}
