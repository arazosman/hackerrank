// https://www.hackerrank.com/challenges/diagonal-difference/problem

#include <stdio.h>

int main()
{
	int n, diagonal1 = 0, diagonal2 = 0, diff;
	scanf("%d", &n);
	int A[n][n];
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
			
	for (int i = 0; i < n; i++)
	{
		diagonal1 += A[i][i];
		diagonal2 += A[i][n-i-1];
	} 
	
	if (diagonal1 > diagonal2)
		diff = diagonal1-diagonal2;
	else
		diff = diagonal2-diagonal1;
		
	printf("%d\n", diff);
	
	return 0;
}
