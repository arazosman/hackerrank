// https://www.hackerrank.com/challenges/weighted-uniform-string/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() // O(n*26) solution
{
    int n, j = 0, ABC[26] = {0};
    char *s = (char *)malloc(512000*sizeof(char));
    scanf("%s %d", s, &n);
    int len = strlen(s);

    while (j < len)
    {
        int seed = 1, letter = s[j] - 'a';

        while (j < len-1 && s[j] == s[j+1])
            seed++, j++;

        if (seed > ABC[letter])
            ABC[letter] = seed;

        j++;
    }

    while (n--)
    {
        int x, flag = 0;
        scanf("%d", &x);

        for (int i = 1; i <= 26; i++)
            if (x % i == 0 && ABC[i-1] >= x/i)
            {
                flag++;
                break;
            }

        printf(flag == 1 ? "Yes\n" : "No\n");
    }

    return 0;
}