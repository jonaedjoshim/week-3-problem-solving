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

        vector<int> a(n + 1), pos(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pos[a[i]] = i;
        }

        int l = 1, r = n;
        int mn = 1, mx = n;

        while (l < r)
        {
            while (mn <= n && (pos[mn] < l || pos[mn] > r))
                mn++;

            while (mx >= 1 && (pos[mx] < l || pos[mx] > r))
                mx--;

            if (a[l] == mn || a[l] == mx)
            {
                l++;
            }
            else if (a[r] == mn || a[r] == mx)
            {
                r--;
            }
            else
            {
                cout << l << ' ' << r << endl;
                goto next;
            }
        }

        cout << -1 << endl;

    next:;
    }

    return 0;
}