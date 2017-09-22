// https://www.hackerrank.com/challenges/beautiful-binary-string/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, j = 0, ans = 0;
    char *s = (char *)malloc(1024*sizeof(char));
    scanf("%d %s", &n, s);

    while (j < n-2)
    {
        if (s[j] == '0' && s[j+1] == '1' && s[j+2] == '0')
            ans++, j += 2;

        j++;
    }
    
    printf("%d\n", ans);

    return 0;
}