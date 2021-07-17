#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
	int dl1=strlen(argv[1]);
	int dl2=strlen(argv[2]);
	int size;
	if (dl1>=dl2)
	{
		size=dl1;
	}
	else
	{
		size=dl2;
	}
	char nap1[size], nap2[size], temp[size];
	strcpy(nap1, argv[1]);
	strcpy(nap2, argv[2]);
	
	printf ("pierwszy: %s  %s\n", nap1, nap2); //Jeden dwa
	strcpy(temp, nap1);
	strcpy(nap1, nap2);
	strcpy(nap2, temp);
     	
 	printf ("pierwszy: %s  %s\n", nap1, nap2); //dwa Jeden
	return 0;
}
