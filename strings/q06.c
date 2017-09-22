// https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char hack[10] = "hackerrank";
    int q;
    scanf("%d", &q);

    while (q--)
    {
        int k = 0;
        char *s = (char *)malloc(512000*sizeof(char));
        scanf("%s", s);

        for (int i = 0; i < strlen(s); i++)
            if (s[i] == hack[k])
                k++;

        if (k == 10)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}