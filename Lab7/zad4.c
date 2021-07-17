#include<stdio.h>
int fib (int n, int p)
{
	static int ile;
	static int tabf[20];
	int i;
	tabf[0]=0;
	tabf[1]=1;
	if (tabf[n]!=0&&n!=0)
		return tabf[n];
	
	if (n==0)
	{
		printf ("%d",p);
		for (i=0;i<p;i++)
			printf(".");
		printf (", Zwracam f(%d), l=%d\n",  n,++ile);
		
		return 0;
	}
	else if (n==1)
	{
		printf ("%d",p);
		for (i=0;i<p;i++)
			printf(".");
		printf (", Zwracam f(%d), l=%d\n", n,++ile);
		
		return 1;
	}
	else if (n==2)
	{
		
		printf ("%d",p);
		for (i=0;i<p;i++)
			printf(".");
		printf (", Zwracam f(%d), l=%d\n",  n,++ile);
		
		return 1;
	}
		
	else 
	{
		
		printf ("%d",p);
		for (i=0;i<p;i++)
			printf(".");
		printf (", Obliczam f(%d)=f(%d)+f(%d), l=%d\n", n, n-1, n-2, ++ile);
		if ((tabf[n-1]!=0))
			tabf[n]=tabf[n-1]+tabf[n-2];
		return fib (n-1, p+1) + fib(n-2, p+1);
	} 
}
int main ()
{
	int n=7;
	printf ("%d\n",fib(n, 0));
	return 0;
}
