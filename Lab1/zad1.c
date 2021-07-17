#include <stdio.h>
int n;
int main()
{
  int zm_1 = 4;
  int zm_3 = 7;
  printf ("B zmienna n=%d, zmienna zm_3=%d \n", n, zm_3);
  printf ("D zmienna zm_1=%d, zmienna zm_3=%d \n", zm_1, zm_3);
   
  {
   int zm_2 = 10;
   printf ("A zmienna n=%d, zmienna zm_2=%d \n", n, zm_2);
   int zm_3 = 6;
   int n = 12;
   zm_3 = zm_3 +1;
   printf ("C zmienna n=%d, zmienna zm_3=%d \n", n, zm_3);
   zm_1 = 6;
   printf ("F zmienna zm_1=%d, zmienna zm_3=%d, zmienna zm_2=%d \n", zm_1, zm_3, zm_2);
  }    
  zm_3 = zm_3 + 1;
  printf ("E zmienna n=%d, zmienna zm_3=%d \n", n, zm_3);
  
return 0;   
}
