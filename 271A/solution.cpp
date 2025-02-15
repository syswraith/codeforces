#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int x,y;
    cin >> y;
    for (x=y+1; x < 10000; x++)
    {    
	string x_str = to_string(x);
	set<char> x_set(x_str.begin(), x_str.end());
	if (x_set.size() == 4){ cout << x << '\n'; break; }
    }

    return 0;
}
