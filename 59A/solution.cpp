#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int upper = 0;
    string s;
    cin >> s;
    for (auto l : s) if (isupper(l)) upper++;
    for (auto l : s) cout << ((upper > (s.size()-upper))?(char)toupper(l):(char)tolower(l));
    cout << '\n';
    return 0;
}
