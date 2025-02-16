#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int x,t;
    cin >> t;
    for (x = 0; x < t; x++)
    {
	int a,b,c;
	cin >> a >> b >> c;
	cout << (((a+b)==c || (b+c)==a || (a+c)==b)?"YES":"NO") << "\n";
    }
    return 0;
}
