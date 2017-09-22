// https://www.hackerrank.com/challenges/caesar-cipher-1/problem

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n, k;
    char *s = (char *)malloc(10240*sizeof(char));
    scanf("%d %s %d", &n, s, &k);

    for (int i = 0; i < n; i++)
    {
        if (islower(s[i]))
            s[i] = 'a' + ((s[i] - 'a' + k) % 26);
        else if (isupper(s[i]))
            s[i] = 'A' + ((s[i] - 'A' + k) % 26);
    }

    printf("%s\n", s);
    return 0;
}