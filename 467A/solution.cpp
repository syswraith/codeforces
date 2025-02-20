#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int n, p, q, c;
    cin >> n;
    c = n;
    while (n)
    {
	cin >> p >> q;
	if (q-p==0 || q-p==1) c--;
	n--;
    }
    cout << c << '\n';
    return 0;
}
