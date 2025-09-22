#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // size of array

    int arr[n];
    int even = 0, odd = 0; // counters

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) // check even
        {
            even++;
        }
        else // otherwise odd
        {
            odd++;
        }
    }

    printf("Even=%d, Odd=%d\n", even, odd);

    return 0;
}
