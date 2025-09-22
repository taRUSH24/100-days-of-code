#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // size of array

    int arr[n + 1]; // ek extra jagah chahiye
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x); // new element

    int i = n - 1;
    // piche se shift karte rahenge jab tak bada element milta rahe
    while (i >= 0 && arr[i] > x)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = x; // sahi jagah insert kar diya

    // print new array
    for (int j = 0; j <= n; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}
