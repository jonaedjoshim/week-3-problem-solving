#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    set<int> s;
    vector<int> ans(n + 1);

    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(a[i]);
        ans[i + 1] = s.size();
    }

    while (m--)
    {
        int l;
        cin >> l;
        cout << ans[l] << endl;
    }

    return 0;
}