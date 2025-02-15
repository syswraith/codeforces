#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s,t;
    cin >> s >> t;
    reverse(s.begin(),s.end());
    cout << ((s==t)?"YES":"NO") << '\n';
    return 0;
}
