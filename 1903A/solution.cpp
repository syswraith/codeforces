#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
	int n,k;
	cin >> n >> k;
	vector<int> array(n), array_mod(n);	
	for (int y = 0; y < n; y++)
	{
	    cin >> array[y];
	}

	array_mod = array;
	sort(array_mod.begin(), array_mod.end());
	
	if ( array == array_mod ){ cout << "YES" << '\n'; }
	else 
	{
	    cout << ((k <= 1)?"NO":"YES") << '\n';
	}

    }
    return 0;
}
