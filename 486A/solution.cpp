#include <bits/stdc++.h>
#define FOR(a,c) for(int a=0;a<c;a++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    long long n;
    cin >> n;
    cout << (((n/2)*((n/2)+1))-(((n+1)/2)*((n+1)/2))) << '\n';
    return 0;
}
