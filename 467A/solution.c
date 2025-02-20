#include <stdio.h>

int main()
{

    int n, p, q, c;
    scanf("%d", &n);
    c = n;
    while (n)
    {
	scanf("%d%d", &p, &q);
	if (q-p==0 || q-p == 1) c--;
	n--;
    }
    printf("%d\n", c);
    return 0;
}
