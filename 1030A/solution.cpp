#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int n,i,c;
    c = 0;
    cin >> n;
    while (n)
    {
	cin >> i;
	(i==1)?c+=1:0;
	n--;
    }
    cout << ((c==0)?"EASY":"HARD") << '\n';

    return 0;
}
