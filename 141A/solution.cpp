#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    string guest, host, pile, guesthost;
    cin >> guest >> host >> pile;
    guesthost = guest + host;
    vector<char> pileVec(pile.begin(), pile.end());

    for (char x : guesthost)
    {
	auto it = find(pileVec.begin(), pileVec.end(), x);
	if (it != pileVec.end())
	{
	    pileVec.erase(it);
	}
	else break;
    }

    cout << ((pileVec.empty())?"YES":"NO") << '\n';

    return 0;
}


