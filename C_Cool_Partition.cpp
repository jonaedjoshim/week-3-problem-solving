#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<int> last_entry(n + 1, 0);
        vector<int> f(n + 1, 0);
        set<int> s;
        for (int R = 1; R <= n; R++)
        {
            int v = a[R];
            if (last_entry[v] != 0)
            {
                s.erase(last_entry[v]);
            }
            s.insert(R);
            last_entry[v] = R;
            f[R] = *s.begin();
        }
        int R = n;
        int cnt = 0;
        while (R >= 1)
        {
            cnt++;
            R = f[R] - 1;
        }
        cout << cnt << endl;
    }
    return 0;
}