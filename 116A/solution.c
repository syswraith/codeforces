#include <stdio.h>

int main()
{

    int counter_1, counter_2, no_of_inputs, passengers, max_passengers;
    passengers=max_passengers=0;
    scanf("%d", &no_of_inputs);
    for (counter_1 = 0; counter_1 < no_of_inputs; counter_1++)
    {
	int a, b;
	scanf("%d%d", &a, &b);
	passengers += b-a;
	int max_capacity;
	max_passengers = ((max_passengers > passengers)?max_passengers:passengers);
    }
    printf("%d\n",max_passengers);
    return 0;
}
