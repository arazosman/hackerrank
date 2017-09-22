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
        int j = 0, ans = 0, len = strlen(s);

        while (j < len)
        {
            if (s[j] == 'A' && j < len)
            {
                j++;

                while (s[j] == 'A')
                    ans++, j++;
            }
            else
            {
                j++;

                while (s[j] == 'B' && j < len)
                    ans++, j++;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}