#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n = 0;
    int magic_count = 0;
    scanf("%lld", &n);
    while (n)
    {
	if (n % 10 == 4 || n % 10 == 7) magic_count++;
	n /= 10;
    }
    printf("%s\n", ((magic_count == 4 || magic_count == 7)?"YES":"NO"));
    return 0;
}
