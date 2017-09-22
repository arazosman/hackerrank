// https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem

#include <iostream>
#include <algorithm>

using namespace std;

bool isValid(string s);
int main()
{
    string s;
    cin >> s;
    cout << (isValid(s) ? "YES\n" : "NO\n");

    return 0;
}

bool isValid(string s)
{
    int ABC[26] = {0}, temp1, temp2, count1 = 0, count2 = 0;

    for (int i = 0, len = s.size(); i < len; i++)
        ABC[s[i]-'a']++;

    for (int i = 0; i < 25; i++)
        if (ABC[i] != 0 && ABC[i+1] != 0 && ABC[i] != ABC[i+1])
        {
            temp1 = ABC[i], temp2 = ABC[i+1];
            
            if (abs(temp1-temp2) != 1)
                return false;

            for (int j = 0; j < 26; j++)
            {
                if (ABC[j] == temp1)
                    count1++;
                else if (ABC[j] == temp2)
                    count2++;
                else if (ABC[j] != 0)
                    return false;

                if (count1 > 1 && count2 > 1)
                    return false;
            }

            break;
        }

    return true;
}