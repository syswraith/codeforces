/*
 A slightly different solution than the python version
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int z = 0;
    string i1, i2;
    cin >> i1;
    cin >> i2;
    for (char &c : i1) c = toupper(c);
    for (char &c : i2) c = toupper(c);
    if (i1<i2){z-=1;}
    else if(i1>i2){z+=1;}
    else {z = 0;}
    cout << z << '\n';
return 0; 
}
