#include <iostream>
using namespace std;

void judge(int coor[], int center[])
{
    if (coor[0]>center[0]){coor[0]-=1;}
    else if (coor[0]<center[0]){coor[0]+=1;}
    else if (coor[1]>center[1]){coor[1]-=1;}
    else if (coor[1]<center[1]){coor[1]+=1;}
}

int main()
{
    int array[5][5];
    int center[2] = {2,2};
    int coor[2];
    int counter = 0;
    
    for (int x = 0; x<5; x++)
    {
	cin>>array[x][0]>>array[x][1]>>array[x][2]>>array[x][3]>>array[x][4];
    }
    
    for (int x = 0; x<5; x++)
    {
	
	for (int y = 0; y<5; y++)
	{
	    if (array[x][y] == 1)
	    {
		coor[0]=x;
		coor[1]=y;
	    }
	}
    
    }

    while ( !(equal(begin(coor), end(coor), begin(center))) )
    {
	counter++;
	judge(coor, center);
    }
    cout << counter << '\n';
    return 0;
}

