// https://www.hackerrank.com/challenges/reduced-string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s = (char *)malloc(512000*sizeof(char));
    scanf("%s", s);
    int i, len = strlen(s), flag = 0;

    while (1)
    {
        flag = 0, i = 1;

        while (i < len)
        {
            if (s[i] == s[i-1])
            {
                flag++;
                len -= 2;

                for (int j = i-1; j < len; j++)
                    s[j] = s[j+2];

                i -= 2;
            }

            i++;
        }

        if (flag == 0)
            break;
    }

    s[len] = '\0';

    if (len == 0)
        printf("Empty String\n");
    else
        printf("%s", s);

    return 0;
}