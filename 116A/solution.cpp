#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int counter_1, counter_2, no_of_inputs, passengers, max_passengers;
    passengers=max_passengers=0;
    cin >> no_of_inputs;

    for (counter_1 = 0; counter_1 < no_of_inputs; counter_1++)
    {
	int a, b;
	cin >> a >> b;
	passengers += b-a;
	int max_capacity;
	max_passengers = ((max_passengers > passengers)?max_passengers:passengers);
    }
    cout << max_passengers << '\n';

    return 0;
}
