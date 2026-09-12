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
        int n, k;
        cin >> n >> k;

        vector<pair<long long, int>> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }

        sort(v.begin(), v.end());

        vector<long long> values;
        vector<int> firstPos, lastPos;

        for (int i = 0; i < n;)
        {
            int j = i;

            while (j < n && v[j].first == v[i].first)
            {
                j++;
            }

            values.push_back(v[i].first);

            int mn = n;
            int mx = -1;

            for (int p = i; p < j; p++)
            {
                mn = min(mn, v[p].second);
                mx = max(mx, v[p].second);
            }

            firstPos.push_back(mn);
            lastPos.push_back(mx);

            i = j;
        }

        while (k--)
        {
            long long a, b;
            cin >> a >> b;

            auto ita = lower_bound(values.begin(), values.end(), a);
            auto itb = lower_bound(values.begin(), values.end(), b);

            if (ita == values.end() || *ita != a ||
                itb == values.end() || *itb != b)
            {
                cout << "NO\n";
                continue;
            }

            int ia = ita - values.begin();
            int ib = itb - values.begin();

            if (firstPos[ia] < lastPos[ib])
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}