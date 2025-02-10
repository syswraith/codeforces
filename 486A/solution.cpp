#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    cout << (floor(n/2)*(floor(n/2)+1))-pow(floor((n+1)/2), 2) << '\n';
    return 0;
}
