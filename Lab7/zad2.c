#include<stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int p=0, d=1, i;
	for (i=0;i<n;i++)
	{
		d=d+p;
		p=d-p;
	}
	printf ("%d\n",p);
	return 0;
}
