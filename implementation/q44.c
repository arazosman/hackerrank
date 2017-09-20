// https://www.hackerrank.com/challenges/bigger-is-greater

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int q, flag, inverse;
    char temp;
    scanf("%d", &q);

    while (q--)
    {
        flag = 0;
        char *w = (char *)malloc(1024*sizeof(char));
        scanf("%s", w);
        int len = strlen(w); 

        for (int i = len-2; i >= 0; i--)
        {
            for (int j = len-1; j >= i+1; j--)
                if (w[i] < w[j])
                {
                    temp = w[i];
                    w[i] = w[j];
                    w[j] = temp;
                    inverse = i;
                    flag++;
                    break;
                }

            if (flag != 0)
                break;
        }

        if (flag != 0)
        {
            for (int i = inverse+1; i < len-1; i++)
                for (int j = i+1; j < len; j++)
                    if (w[i] > w[j])
                    {
                        temp = w[i];
                        w[i] = w[j];
                        w[j] = temp;
                    }

            printf("%s\n", w);
        }
        else
            printf("no answer\n");   

        free(w);
    }

    return 0;
}