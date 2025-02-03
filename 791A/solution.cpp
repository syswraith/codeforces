#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    
    int a,b,c;
    a=b=c=0;
    cin >> a >> b;
    
    do a*=3,b*=2,c+=1; while (a <= b);
    
    cout << c << '\n';

    return 0;
}
