// https://www.hackerrank.com/challenges/making-anagrams/problem

#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int a_len = a.length(), b_len = b.length(), ans = 0;
    int A[26] = {0};

    for (int i = 0; i < a_len; i++)
        A[a[i]-'a']++;

    for (int i = 0; i < b_len; i++)
        A[b[i]-'a']--;

    for (int i = 0; i < 26; i++)
        ans += abs(A[i]);

    cout << ans << endl;

    return 0;
}