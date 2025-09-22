#include <stdio.h>

int main()
{
    int n1;
    scanf("%d", &n1); // size of first array

    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]); // first array input
    }

    int n2;
    scanf("%d", &n2); // size of second array

    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]); // second array input
    }

    int merged[n1 + n2]; // merged array

    // copy first array
    for (int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    // copy second array
    for (int i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }

    // print merged array
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}
