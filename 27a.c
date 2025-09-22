#include <stdio.h>

int main()
{
    int n = 5; // peak line (yaha tak badhega)

    // upar ka part (1 se odd numbers badhte hue)
    for (int i = 1; i <= n; i++)
    {
        int stars = 2 * i - 1; // formula for odd numbers 1,3,5,...
        for (int j = 1; j <= stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // niche ka part (reverse)
    for (int i = n - 1; i >= 1; i--)
    {
        int stars = 2 * i - 1;
        for (int j = 1; j <= stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
