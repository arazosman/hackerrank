// https://www.hackerrank.com/challenges/the-birthday-bar

#include <stdio.h>

int main()
{
    int n, d, m, sum, ans = 0;
    scanf("%d", &n);
    int A[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    scanf("%d %d", &d, &m);

    for (int i = 0; i < n-m+1; i++)
    {
        sum = 0;

        for (int j = i; j < i+m; j++)
            sum += A[j];

        if (sum == d)
            ans++;
    }

    printf("%d\n", ans);

    return 0;
}