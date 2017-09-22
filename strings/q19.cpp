// https://www.hackerrank.com/challenges/game-of-thrones/problem

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length(), flag = 0;
    int ABC[26] = {0};

    for (int i = 0; i < len; i++)
        ABC[s[i]-'a']++;

    for (int i = 0; i < 26; i++)
        if (ABC[i] % 2 != 0)
        {
            if (len % 2 == 0)
            {
                flag = 2;
                break;
            }
            else if (flag == 0)
                flag++;
            else
            {
                flag++;
                break;
            }
        }

    cout << ((flag != 2) ? "YES\n" : "NO\n");

    return 0;
}