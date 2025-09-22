#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // size of array

    int arr[n];
    // array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0]; // assume first is max
    int min = arr[0]; // assume first is min

    for (int i = 1; i < n; i++) // check baaki elements
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}
