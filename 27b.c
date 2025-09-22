#include <stdio.h>

int main()
{
    int n = 4; // yaha tak top half jayega

    // top half
    for (int i = 1; i <= n; i++)
    {
        // spaces first
        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }
        // stars after that
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // bottom half
    for (int i = n - 1; i >= 1; i--)
    {
        // spaces
        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }
        // stars
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
