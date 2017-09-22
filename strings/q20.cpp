// https://www.hackerrank.com/challenges/two-strings/problem

#include <iostream>

using namespace std;

int main()
{
    int p;
    cin >> p;

    while (p--)
    {
        string a, b;
        cin >> a >> b;
        int A[26] = {0}, B[26] = {0}, j = 0;

        for (int i = 0, len = a.length(); i < len; i++)
            A[a[i]-'a']++;

        for (int i = 0, len = b.length(); i < len; i++)
            B[b[i]-'a']++;

        while (j < 26)
        {
            if (A[j] > 0 && B[j] > 0)
                break;

            j++;
        }

        cout << ((j < 26) ? "YES\n" : "NO\n");
    }

    return 0;
}