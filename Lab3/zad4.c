#include <stdio.h>
#include <string.h>
#include<math.h>
  
// p - pozycja , n - to liczba bitów 
unsigned bity(int x, int p, int n)
{
	return  ((int)pow(2,n)-1) & (x>>p);
}

int main ()
{
	unsigned wynik, liczba = 18; // 10010
	wynik = bity(liczba, 1, 3); // 3 bity od pozycji 1, czyli: 1 001 0
	printf("%d",wynik); // 001 = 1
	getchar();
	return 0;
}