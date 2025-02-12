#include <bits/stdc++.h>
#define FOR(a,c) for(int a=0;a<c;a++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    long long n,k;
    cin >> n >> k;
    while (k > 0) (n%10==0)?n/=10:n-=1, k-=1;
    cout << n << '\n';
    return 0;
}
