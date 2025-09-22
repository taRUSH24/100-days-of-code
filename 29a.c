#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // size of array

    int arr[n];
    int sum = 0; // yaha par total rakhenge

    // input + sum calculation ek hi sath kar lo
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; // har element add karte jao
    }

    printf("%d\n", sum); // final answer

    return 0;
}
