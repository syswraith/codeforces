#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    double n,m,a;
    cin >> n >> m >> a;
    cout << fixed << setprecision(0) << ceil(n/a) * ceil(m/a) << '\n';
    return 0;
}
