#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[]= "Jak sie nie ma, co sie lubi, to sie lubi, co sie ma.";
	char str2[]= "sie";
	int i=0, dl=strlen(str2);
	char *w=strstr(str1,str2), *y;
	
	while (w!=NULL)
	{
		i=1;
		y=w+dl;
		strcpy(w,y);
		w=strstr(str1,str2);
	}
	if (i==0)
	{
		printf ("NULL");
	}
	else
	{
		printf ("%s\n", str1);
	}
	return 0;
	
}
