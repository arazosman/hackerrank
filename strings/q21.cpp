// https://www.hackerrank.com/challenges/string-construction/problem

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int ABC[26] = {0}, ans = 0;
        string s;
        cin >> s;

        for (int i = 0, len = s.size(); i < len; i++)
            if (ABC[s[i]-'a'] == 0)
                ABC[s[i]-'a']++;

        for (int i = 0; i < 26; i++)
            ans += ABC[i];

        cout << ans << endl;
    }

    return 0;
}