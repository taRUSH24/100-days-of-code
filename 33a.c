#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // size of array

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key); // element to search

    int low = 0, high = n - 1, found = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key) // match mil gaya
        {
            found = mid;
            break;
        }
        else if (arr[mid] < key) // right side me dhoondo
        {
            low = mid + 1;
        }
        else // left side me dhoondo
        {
            high = mid - 1;
        }
    }

    if (found != -1)
    {
        printf("Found at index %d\n", found);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
