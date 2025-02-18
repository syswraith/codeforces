#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string n;
    int magic_count = 0;
    cin >> n;
    for (auto d : n)
	if (d == '4' || d == '7') magic_count++;
    cout << ((magic_count == 4 || magic_count == 7)?"YES":"NO") << '\n';
    return 0;
}
