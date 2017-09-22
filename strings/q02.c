// https://www.hackerrank.com/challenges/camelcase

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *s = (char *)malloc(100240*sizeof(char));
    scanf("%s", s);
    int ans = 1;

    for (int i = 1; i < strlen(s); i++)
        if (isupper(s[i]) == 1)
            ans++;

    printf("%d\n", ans);

    return 0;
}