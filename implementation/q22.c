// https://www.hackerrank.com/challenges/angry-professor

#include <stdio.h>

int main()
{
    int t; 
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, k, std = 0; 
        scanf("%d %d", &n, &k);       
        int A[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[j]);

            if (A[j] <= 0)
                std++; 
        }
        if (std >= k)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}