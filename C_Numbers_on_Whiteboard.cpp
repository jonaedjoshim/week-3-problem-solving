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

        cout << 2 << endl;

        if (n == 2)
        {
            cout << 1 << " " << 2 << endl;
            continue;
        }

        int a = n;
        int b = n - 2;

        cout << b << " " << a << endl;

        int current = (a + b + 1) / 2;

        cout << current << " " << n - 1 << endl;
        current = (current + (n - 1) + 1) / 2;

        for (int i = n - 3; i >= 1; i--)
        {
            cout << current << " " << i << endl;
            current = (current + i + 1) / 2;
        }
    }

    return 0;
}