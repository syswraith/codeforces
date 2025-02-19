#include <stdio.h>

int main()
{
    int n,i,c;
    c = 0;
    scanf("%d", &n);
    while (n)
    {
	scanf("%d", &i);
	(i==1)?c+=1:0;
	n--;
    }
    printf("%s\n",((c==0)?"EASY":"HARD"));
    return 0;
}
