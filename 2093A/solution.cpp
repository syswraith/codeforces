#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        cout << ((k%2)?"YES":"NO") << '\n';
    }
    return 0;
}
