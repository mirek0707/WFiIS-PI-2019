#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
  int i;
  char n[]="ALA ma KOTA"; 
  printf("Lancuch oryginalny: a->%s\n",n); // Lancuch oryginalny: a-> ALA ma KOTA  
  for (i=0;n[i]!='\0';i++)
  {
  	n[i]=tolower(n[i]);
  }
  printf("Lancuch zmieniony: a->%s\n",n); //  a-> ala ma kota
  return 0;
}
