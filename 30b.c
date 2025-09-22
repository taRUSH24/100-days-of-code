#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // size of array

    int arr[n];
    int pos = 0, neg = 0, zero = 0; // counters

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > 0) // positive check
        {
            pos++;
        }
        else if (arr[i] < 0) // negative check
        {
            neg++;
        }
        else // means zero
        {
            zero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);

    return 0;
}
