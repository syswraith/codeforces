#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool judge(int a, int b)
{
    return a < b;
}

int main()
{
    string expr;
    cin >> expr;
    vector<char> arr;
    for (int x = 0; x < expr.size(); x+=2) arr.push_back(expr[x]);
    sort(arr.begin(), arr.end(), judge);
    for (int i =0; i < arr.size(); i++)
    {
	(i == (arr.size()-1)) ? cout << arr[i] << '\n' : cout << arr[i] << '+';
    }
    return 0;
}
