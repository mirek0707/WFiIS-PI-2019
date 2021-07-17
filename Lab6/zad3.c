#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> 
int main ()
{
	time_t czas;
	int i, s=0;   
	srand( (unsigned int)time(&czas) ); 
	char losuj_wyraz[30];
	char z=('a' + rand()%('z'-'a'+1));
	
	for (i=0;i<30;i++)
	{
		losuj_wyraz[i]=('a' + rand()%('z'-'a'+1)); 
	}
	char *p=losuj_wyraz;
	printf ("%s %c\n",losuj_wyraz, z);
	while (p!=NULL)
	{
		
		p=strchr (p, z);
	       if (p!=NULL)
	       {
		printf ("%p %ld\n",strchr (p, z),strchr (p, z) - losuj_wyraz);
		p++;
		s++;
		}
	}
	if (s!=0)
		printf ("%d\n",s);
	else
		printf("Ta litera nie wystepuje w lancuchu\n");
	return 0;
	
}
