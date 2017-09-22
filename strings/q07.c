// https://www.hackerrank.com/challenges/pangrams/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int ABC[26] = {0}, flag = 0;
    char *s = (char *)malloc(512000*sizeof(char));
    fgets(s, 1000, stdin);

    for (int i = 0, len = strlen(s); i < len; i++)
        if (isalpha(s[i]))
            islower(s[i]) ? ABC[s[i] - 'a']++ : ABC[s[i] - 'A']++;

    for (int i = 0; i < 26; i++)
        if (ABC[i] == 0)
        {
            flag++;
            break;
        }

    if (flag == 0)
        printf("pangram\n");
    else
        printf("not pangram\n");

    return 0;
}