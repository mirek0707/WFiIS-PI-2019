#include <stdio.h>
#define R 10
void show (int *x);
void push (int *x, int y);
int pop (int *x); 
 
int *pierwszy;
int rozmiar=0;
int main ()
{
	int T[R]={0};
	pierwszy=T;
	show (T);
	push (T, 5);
	show (T);
	push (T, 6);
	show (T);
	push (T, 7);
	show (T);
	pop (T);
	show (T);	
}
void show (int *x)
{
	int i=0;
	for (i; i<rozmiar;i++)
		printf ("%d", *(x+i));
	printf ("\n");
}
void push (int *x, int y)
{
	if (rozmiar == 9)
		printf ("pelny stos");
	else 
	{
		*(x+rozmiar)=y;
		rozmiar++;
	}
}
int pop (int *x)
{
	if (rozmiar==0)
		printf ("pusty stos");
	else 
	{
		*(x+rozmiar)=0;
		rozmiar--;
	}
}
