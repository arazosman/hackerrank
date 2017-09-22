// https://www.hackerrank.com/challenges/palindrome-index/problem

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

        for (int i = 0, len = strlen(s); i < len/2; i++)
        {
            if (s[i] != s[len-i-1])
            {
                for (int j = i; j < len/2; j++)
                {
                    if (s[j+1] != s[len-j-1])
                    {
                        printf("%d\n", len-i-1);
                        break;
                    }
                    else if (s[j] != s[len-j-2])
                    {
                        printf("%d\n", i);
                        break;
                    }
                }

                break;
            }
            else if (i == len/2-1)
                printf("-1\n");
        }
    }

    return 0;
}