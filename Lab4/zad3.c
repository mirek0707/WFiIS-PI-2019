#include <stdio.h>
void wypisz (double *p, double *k);
int main(void)
{
  double tabela[ ] = {34.,12.4,11.1,9.3,3.0,0.5};
  double *poczatek, *koniec, suma=0 ;
  int tab_len;
      
     tab_len = sizeof(tabela)/sizeof(double);  // ustalenie rozmiaru tablicy
     poczatek=tabela; // ustawienie wska\u017anika poczatek na poczatek tablicy
     koniec=tabela+tab_len-1;  // ustawienie wska\u017anika koniec na koniec tablicy
      
   wypisz (poczatek, koniec); //wypisanie tablicy
   while (poczatek <= koniec)
   {
     suma+=*(poczatek);
     poczatek++;
   }
 
printf("suma %d  elementow tablicy = %.1f \n", tab_len, suma);
return 0;
}
 
//definicja procedury wypisujacej tablice typu double
 
void wypisz (double *p, double *k) {
 
    while (p<=k)
     
          printf ("%f\n",*p++);    
return;
}
