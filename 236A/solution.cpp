#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string input;
    set<char> unique;
    cin >> input;
    for (char c : input) unique.insert(c);
    cout << ((unique.size() & 1)?"IGNORE HIM!":"CHAT WITH HER!") << '\n';
    return 0;
}
