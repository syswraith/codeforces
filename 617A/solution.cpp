#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int x,y,c;
    cin >> x;
    c = 0;

    while (x>=5) x-=5,c++;

    if (x!=0) c++;
    
    cout << c << '\n';
    return 0;
}
