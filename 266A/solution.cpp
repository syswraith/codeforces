#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    
    int n,c=0;
    string s;
    
    cin >> n;
    cin >> s;

    for (int x = 0; x < n; x++) if (s[x] == s[x+1]) c+=1;
    
    cout << c << '\n';
    
    return 0;
}
