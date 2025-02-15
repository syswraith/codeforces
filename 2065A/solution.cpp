#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int x, y, t;
    cin >> t;
    for (x = 0; x < t; x++)
    {
        string w;
        cin >> w;
        if (w == "us") cout << "si\n";
        else 
	{
	    w.replace("us\n", "i\n");
	}
    }
    return 0;
}

