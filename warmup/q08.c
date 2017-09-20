// https://www.hackerrank.com/challenges/mini-max-sum/problem

#include <stdio.h>

int main()
{
	long long int A[5], sum1 = 0, sum2 = 0;
	
	for (int i = 0; i < 5; i++)
		scanf("%lld", &A[i]);
		
	int max = A[0], min = A[0], max_i = 0, min_i = 0;
	
	for (int i = 1; i < 5; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
			max_i = i;
		}
		else if (A[i] < min)
		{
			min = A[i];
			min_i = i;
		}
	}
	
	
	for (int i = 0; i < 5; i++)
	{
		if (i == max_i)
			continue;
		
		sum1 += A[i];
	}
	
	for (int i = 0; i < 5; i++)
	{
		if (i == min_i)
			continue;
		
		sum2 += A[i];
	}
	
	printf("%lld %lld\n", sum1, sum2);

	return 0;
}
