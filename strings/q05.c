// https://www.hackerrank.com/challenges/mars-exploration/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ans = 0;
    char* s = (char *)malloc(10240*sizeof(char));
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i += 2)
    {
        if (s[i] != 'S')
            ans++;
        if (s[i+1] != 'O')
            ans++;
    }

    printf("%d\n", ans);
    return 0;
}