#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t; 
    scanf("%d", &t);

    while (t--)
    {
        int flag = 0;
        char *s = (char *)malloc(512000*sizeof(char));
        scanf("%s", s);

        for (int i = 1, len = strlen(s); i < len; i++)
            if (abs(s[i] - s[i-1]) != abs(s[len-i-1] - s[len-i]))
            {
                flag++;
                break;
            }

        printf(flag == 0 ? "Funny\n" : "Not Funny\n"); 
    }

    return 0;
}