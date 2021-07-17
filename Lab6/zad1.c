#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
	int pierwsza = atoi(argv[1]);
	int druga = atoi(argv[2]);
	char znak = *argv[3];
	switch(znak)
	{
		case '+':
		printf ("%d + %d = %d",pierwsza, druga, pierwsza+druga);
		break;
		case '-':
		printf ("%d - %d = %d",pierwsza, druga, pierwsza-druga);
		break;
		case '*':
		printf ("%d * %d = %d",pierwsza, druga, pierwsza*druga);
		break;
		case '/':
		if (druga!=0)
			printf ("%d / %d = %d",pierwsza, druga, pierwsza/druga);
		else
			printf ("bledne dane");
		break;
		case '%':
		if (druga!=0)
			printf ("%d %% %d = %d",pierwsza, druga, pierwsza%druga);
		else
			printf ("bledne dane");
		break;
		default:
		printf ("bledne dane");
		break;
	}
	return 0;
}
