// https://www.hackerrank.com/challenges/anagram/problem

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
        int len = strlen(s);

        if (len % 2 != 0)
            printf("-1\n");
        else
        {
            int ans = 0;
            
            for (int i = 0; i < len/2; i++)
            {
                for (int j = len/2; j < len; j++)
                {
                    if (s[i] == s[j])
                    {
                        s[j] = '0';
                        break;
                    }
                    else if (j == len-1)
                        ans++;
                }
            }

            printf("%d\n", ans);
        }
    }

    return 0;
}