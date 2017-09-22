// https://www.hackerrank.com/challenges/alternating-characters/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char *s = (char *)malloc(512000*sizeof(char));
        scanf("%s", s);
        int ans = 0, len = strlen(s);

        for (int i = 0; i < len-1; i++)
            if (s[i] == s[i+1])
                ans++; 

        printf("%d\n", ans);
    }

    return 0;
}