#include <iostream>
using namespace std;
int main()
{
    int w=0;
    int x;
    cin>>x;
    for (int y=0;y!=x;y++)
    {
	char z[4];
	cin >> z;
	if(z[1]==43){w++;}
	else{w--;}
    }
    std::cout<<w<<endl;
    return 0;
}
