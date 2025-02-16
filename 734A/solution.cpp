#include <bits/stdc++.h>
#define FOR(a,c) for(int a=0;a<c;a++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int n, o, A = 0;
    string s;
    cin >> n >> s;

    for (o = 0; o < n; o++) if (s[o] == 'A') A++;
    if (A > (n-A)) cout << "Anton";
    else if (A < (n-A)) cout << "Danik";
    else cout << "Friendship";
    cout << '\n';
    return 0;
}
