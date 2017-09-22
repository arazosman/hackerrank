// https://www.hackerrank.com/challenges/weighted-uniform-string/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() // O(n*strlen(s)) solution
{
    int n, j = 0, k = 0;
    char *s = (char *)malloc(512000*sizeof(char));
    scanf("%s %d", s, &n);
    int len = strlen(s), Subs[100000] = {0};

    while (j < len)
    {
        int temp = 1;

        do
        {
            Subs[k] = temp*(s[j] - 'a' + 1);
            j++, k++, temp++;
        }
        while (j < len-1 && s[j] == s[j+1]);
    }

    while (n--)
    {
        int x, flag = 0;
        scanf("%d", &x);

        for (int i = 0; i < k; i++)
            if (Subs[i] == x)
            {
                flag++;
                break;
            }

        if (flag == 0)
            printf("No\n");
        else
            printf("Yes\n");
    }

    return 0;
}