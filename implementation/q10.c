// https://www.hackerrank.com/challenges/bon-appetit

#include <stdio.h>

int main()
{
    int n, k, b_charged = 0, b_actual = 0;
    scanf("%d %d", &n, &k);
    int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);

        if (i == k)
            continue;
        
        b_actual += A[i];
    }

    scanf("%d", &b_charged);
    b_actual /= 2;

    if (b_actual == b_charged)
        printf("Bon Appetit\n");
    else
        printf("%d\n", b_charged - b_actual);

    return 0;
}