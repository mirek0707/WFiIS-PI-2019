#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n, i, max, min;
	float sr=0;
	time_t czas; 
	n=118+rand()%(286-118+1);
	max=n;
	min=n;
	sr+=n;
	srand( (unsigned int)time(&czas) );
	for (i=1;i<20;i++)
	{
		n=118+rand()%(286-118+1);
		sr+=n;
		if (n>max)
		{
			max=n;
		}
		else if (n<min)
		{
			min=n;
		}
	}
	sr=sr/i;
	printf("max= %d, min= %d, srednia= %f", max, min, sr);
	return 0;
}
