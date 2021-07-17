#include <stdio.h>
#define R 10
void show (int *x, int rozmiar);
void push (int *x, int y, int* pierwszy, int* rozmiar);
int pop (int *x, int* rozmiar); 

int main ()
{
	int *pierwszy;
	int rozmiar=0;
	int T[R]={0};
	pierwszy=T;
	show (T, rozmiar);
	push (T, 5, pierwszy, &rozmiar);
	show (T, rozmiar);
	push (T, 6, pierwszy, &rozmiar);
	show (T, rozmiar);
	push (T, 7, pierwszy, &rozmiar);
	show (T, rozmiar);
	pop (T, &rozmiar);
	show (T, rozmiar);	
}
void show (int *x, int rozmiar)
{
	for (int i=0; i<rozmiar;i++)
		printf ("%d", *(x+i));
	printf ("\n");
}
void push (int *x, int y, int* pierwszy, int* rozmiar)
{
	if (*rozmiar == 9)
		printf ("pelny stos");
	else 
	{
		*(x+*rozmiar)=y;
		(*rozmiar)++;
	}
}
int pop (int *x, int* rozmiar)
{
	if (*rozmiar==0)
		printf ("pusty stos");
	else 
	{
		*(x+*rozmiar)=0;
		(*rozmiar)--;
	}
	return *rozmiar;
}
