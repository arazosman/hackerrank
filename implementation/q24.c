// https://www.hackerrank.com/challenges/strange-advertising

#include <stdio.h>

int main()
{
    int n, sum = 0, ad = 5;
    scanf("%d", &n);

    for (int  i = 0; i < n; i++)
    {
        ad /= 2;
        sum += ad;
        ad *= 3;
    }

    printf("%d", sum);

    return 0;
}