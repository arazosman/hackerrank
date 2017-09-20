// https://www.hackerrank.com/challenges/lisa-workbook

#include <stdio.h>
#include <math.h>

int main()
{
    int n, k, page = 1, ans = 0;
    scanf("%d %d", &n, &k);
    int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);

        for (int j = 1; j <= A[i]; j++)
        {
            if (j == page)
                ans++;

            if (j % k == 0)
                page++;
        }

        if (A[i] % k != 0)
            page++;
    }

    printf("%d\n", ans);

    return 0;
}