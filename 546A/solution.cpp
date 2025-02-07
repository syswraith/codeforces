#include <iostream>
using namespace std;
int main()
{
    int k, n, w, x, t, m;
    cin >> k >> n >> w;
    t = 0;
    for (x = 1; x < w+1; x++) t+=(x*k);
    m = t-n;
    cout << ((m>0)?m:0) << '\n';
    return 0;
}
