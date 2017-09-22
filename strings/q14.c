// https://www.hackerrank.com/challenges/the-love-letter-mystery/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char *s = (char *)malloc(10240*sizeof(char));
        scanf("%s", s);
        int ans = 0, len = strlen(s);

        for (int i = 0; i < len/2; i++)
            ans += abs(s[i] - s[len-i-1]);

        printf("%d\n", ans);
    }

    return 0;
}