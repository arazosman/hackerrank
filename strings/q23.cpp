// https://www.hackerrank.com/challenges/richie-rich/problem

#include <iostream>

using namespace std;

int main()
{
    int n, k, j = 0, temp = 0;
    string s;
    cin >> n >> k >> s;
    int change[n/2];

    for (int i = 0; i < n/2; i++)
        change[i] = 0;

    for (int i = 0; i < n/2 && k > 0; i++)
        if (s[i] != s[n-i-1])
        {
            (s[i] > s[n-i-1]) ? (s[n-i-1] = s[i]) : (s[i] = s[n-i-1]);
            change[i]++;
            k--;
        }

    while (k > 0 && j < n/2)
    {
        if (s[j] < '9')
        {
            if (change[j] == 1)
            {
                s[j] = '9', s[n-j-1] = '9';
                k--;
            }
            else if (change[j] == 0 && k > 1)
            {
                s[j] = '9', s[n-j-1] = '9';
                k -= 2;
            }
        }

        j++;
    }

    if (k > 0 && (n % 2) == 1)
        s[n/2] = '9';

    for (int i = 0; i < n/2; i++)
        if (s[i] == s[n-i-1])
            temp++;

    cout << ((temp == n/2) ? s : "-1") << endl;

    return 0;
}