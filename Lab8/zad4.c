#include <stdio.h>
#include <stdlib.h>
#include <string.h>
   
 
 
   
void print_string_array(char **t, int s)
{
	int i;
	for (i=0;i<s;i++)
	{
		printf ("%s\t", *(t+i));
	}
	printf ("\n");
}
char * min_string (char **t, int s) //znajdowanie najmniejszego stringu w tablicy stringow - zwraca wskaznik 
 {
 	int i;
	int min=0;
	for (i=0;i<s;i++)
	{
		if (strcmp(t[min],t[i])>0)
		{
			min=i;
		}
		
	}
	return t[min];
 }
int main() 
 
{ 
    char *strings[] = { "Zorro", "Alex", "Celine", "Bill", "Forest", "Dexter"};
     
    char *wsk_string ;
         
        size_t strings_len = sizeof(strings)/sizeof(*strings); //okreslenie d\u0142ugosci tablicy strings
   
     
     
  
    print_string_array(strings, strings_len); //wypisanie tablicy 
  
 
     
    wsk_string = min_string(strings,strings_len);//znalezienie najmniejszego stringu w tablicy 
   
     
    printf("%c\n", wsk_string); //wypisanie najmniejszego stringu 
   
    return 0; 
} 
