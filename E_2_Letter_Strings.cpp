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

        vector<string> s(n);
        long long cnt[11][11] = {0};
        long long totalFirst[11] = {0};
        long long totalSecond[11] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            int a = s[i][0] - 'a';
            int b = s[i][1] - 'a';
            cnt[a][b]++;
            totalFirst[a]++;
            totalSecond[b]++;
        }

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            int a = s[i][0] - 'a';
            int b = s[i][1] - 'a';

            long long sameFirst = totalFirst[a] - cnt[a][b];
            long long sameSecond = totalSecond[b] - cnt[a][b];

            ans += sameFirst + sameSecond;
        }

        ans /= 2;
        cout << ans << endl;
    }

    return 0;
}