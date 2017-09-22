// https://www.hackerrank.com/challenges/gem-stones/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ABC[26] = {0}, ans = 0, n;
    scanf("%d", &n);
    char **s = (char **)malloc(n*sizeof(char *));

    for (int i = 0; i < n; i++)
    {
        s[i] = (char *)malloc(10240*sizeof(char));
        scanf("%s", s[i]);

        for (int j = 0, len = strlen(s[i]); j < len; j++)
            if (ABC[s[i][j] - 'a'] == i)
                ABC[s[i][j] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
        if (ABC[i] == n)
            ans++;

    printf("%d\n", ans);

    return 0;
}