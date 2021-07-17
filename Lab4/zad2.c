#include<stdio.h>
#include <stdlib.h>
#include <time.h> 
float suma(float *poczatek, int n)
{
	int i;
	float s=0;
	for (i=0;i<n;i++)
	{
		s+=*(poczatek+i);
	}
	return s;
}
float iloczyn(float *poczatek, float *koniec)
{
	//int i, n;
	float s;
	s=*poczatek++;
	while(poczatek<=koniec)
	
		s*=*(poczatek++);
	
	return s;
}
int main ()
{
	float T[100]={0};
	int i, f=10;
	T[0]-=1;
	for (i=1;i<100;i++)
	{
		T[i]=T[i-1]+0.03;
	}
	printf ("suma: %6.2f\nIloczyn: %f\n",suma(T,100), iloczyn(T,T+99));
	for (i=0;i<10;i++)
	{
		
		printf ("elementy od %d do %d iloczyn: %f ",i*f,(i+1)*f-1,iloczyn(T+i*f,T+(i+1)*f-1));
		printf ("suma: %f \n",suma(T+i*f,f));
	}
}
