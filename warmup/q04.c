// https://www.hackerrank.com/challenges/a-very-big-sum/problem

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	long long int A[n], sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &A[i]);
		sum += A[i];
	}

	printf("%lld", sum);

	return 0;
}
