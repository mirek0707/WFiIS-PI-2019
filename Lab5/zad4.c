#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int *where (int *w, int r)
{
	int i, pm, m;
	pm=-1, m=-12;
	for (i=0;i<r;i++)
	{
		if (*(w+i)%2==0)
		{
			if (*(w+i)>m)
			{
				m=*(w+i);
				pm=i;
			}
		}
	}
	if (m==-12)
	{
		return NULL;
		
	}
	else
	{
		return w+pm;
	}
}
int main ()
{
	int T[5], T1[10], T2[15];
	int i, r, *a, *b, *c;
	time_t czas;   
	srand( (unsigned int)time(&czas) );
	r = sizeof(T)/sizeof(int);
	for (i=0;i<r;i++)
	{
		*(T+i)=  rand()%(20+1)-10;
	}
	a=where(T,r);
	r = sizeof(T1)/sizeof(int);
	for (i=0;i<r;i++)
	{
		*(T1+i)=  rand()%(20+1)-10;
	}
	b=where(T1,r);
	r = sizeof(T2)/sizeof(int);
	for (i=0;i<r;i++)
	{
		*(T2+i)=  rand()%(20+1)-10;
	}
	c=where(T2,r);
	
	if ((a==NULL)||(b==NULL)||(c==NULL))
	{
		printf ("brak\n");
	}
	
	else if ((*a>*b)&&(*a>*c))
	{
		printf ("pierwsza tablica, %d, %p \n",*a, a); 
	}
	else if ((*b>*a)&&(*b>*c))
	{
		printf ("druga tablica, %d, %p \n",*b, b); 
	}
	else if ((*c>*b)&&(*c>*a))
	{
		printf ("trzecia tablica, %d, %p \n",*c, c); 
	}
	return 0;
	
}
