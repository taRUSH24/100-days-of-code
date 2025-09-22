#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // size of array

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // input elements
    }

    int key;
    scanf("%d", &key); // element to search

    int found = -1; // assume not found
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key) // match mil gaya
        {
            found = i;
            break; // no need to check further
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
