// https://www.hackerrank.com/challenges/two-characters

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, temp, max = 0;
    scanf("%d", &n);
    char *s = (char *)malloc(512000*sizeof(char));
    scanf("%s", s);

    for (int i = 'a'; i < 'z'; i++)
    {
        for (int j = i+1; j <= 'z'; j++)
        {
            int cur = 0, k = 0;

            while (k < n)
            {
                if (s[k] == i || s[k] == j)
                {
                    temp = s[k], cur++, k++;
                    break;
                }

                k++;
            }

            while (k < n)
            {
                if ((s[k] == i && temp == j) || (s[k] == j && temp == i))
                {
                    temp = s[k];
                    cur++;
                }
                else if ((s[k] == i && temp == i) || (s[k] == j && temp == j))
                {
                    cur = 0;
                    break;
                }

                k++;
            }

            if (cur > max)
                max = cur;
        }
    }

    if (max > 1)
        printf("%d\n", max);
    else
        printf("0\n");

    return 0;
}