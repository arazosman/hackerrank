// https://www.hackerrank.com/challenges/repeated-string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* s = (char *)malloc(512000 * sizeof(char));
    long n, ans, a = 0, j = 0;
    scanf("%s %ld", s, &n);

    while (s[j] != '\0')
    {
        if (s[j] == 'a')
            a++;
        
        j++;
    }

    ans = (n / strlen(s)) * a;

    for (int i = 0; i < n % strlen(s) && s[i] == 'a'; i++)
        ans++;

    printf("%ld\n", ans);

    return 0;
}