#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int m;
        cin >> m;

        while (m--)
        {
            string s;
            cin >> s;

            if ((int)s.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }

            map<long long, char> numToChar;
            map<char, long long> charToNum;
            bool ok = true;

            for (int i = 0; i < n; i++)
            {
                long long num = a[i];
                char ch = s[i];

                if (numToChar.count(num) && numToChar[num] != ch)
                {
                    ok = false;
                    break;
                }

                if (charToNum.count(ch) && charToNum[ch] != num)
                {
                    ok = false;
                    break;
                }

                numToChar[num] = ch;
                charToNum[ch] = num;
            }

            if (ok)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}