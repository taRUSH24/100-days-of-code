#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // size le lo

    int arr[n]; // array bana diya

    // input array ke elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // print array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
