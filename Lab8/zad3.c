#include <stdio.h>
#include <stdlib.h>

int main( ){
   
int a[] = {1,12,13,14,22};
int b[] = {3,4,13,45,54,55,56,66};
int dA=sizeof(a)/sizeof(int), dB=sizeof(b)/sizeof(int);
int d=dA+dB, i=0, j=0, k=0;
int T[d];
while (j<dA&&k<dB)
{
	if (a[j]<=b[k])
	{
		T[i]=a[j];
		i++;
		j++;
	}
	else
	{
		T[i]=b[k];
		i++;
		k++;
	}
	
}
if (j==dA)
	{
		for(i;i<d;i++)
		{
		T[i]=b[k];
		k++;
		}
	}
	else if (k==dB)
	{
		for(i;i<d;i++)
		{
		T[i]=a[j];
		j++;
		}
	}
for (i=0;i<d;i++)
{
	printf("%d ",T[i]);
}
return 0;
}
