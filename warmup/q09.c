// https://www.hackerrank.com/challenges/birthday-cake-candles/problem

#include <stdio.h>

int main()
{
	int n, max, blew = 0;
	scanf("%d", &n);
	int A[n];
	
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);

	max = A[0];
	
	for (int i = 0; i < n; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
			blew = 1;
		}
		else if (A[i] == max)
		{
			max = A[i];
			blew++;
		}
	}
	
	printf("%d\n", blew);

	return 0;
}
