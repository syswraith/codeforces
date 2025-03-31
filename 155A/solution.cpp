#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int a, t, x, minimum, maximum;
    cin >> t;
    vector<int> n(t);
    a = 0;
    for (x = 0; x < t; x++) cin >> n[x];
    minimum = maximum = n[0];
    for (x = 1; x < t; x++)
    {
	if (n.size() == 1) break;
	if (maximum < n[x])
	{
	    maximum = n[x];
	    a++;
	}
	if (minimum > n[x])
	{
	    minimum = n[x];
	    a++;
	}
    }
    cout << a << '\n';
    return 0;
}

