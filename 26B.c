#include <stdio.h>

int main()
{
    int stars[] = {1, 3, 5, 3, 1}; // kitne stars har block me
    int n = 5; // total blocks

    for (int i = 0; i < n; i++) // har block ke liye loop
    {
        for (int j = 0; j < stars[i]; j++) // block ke andar stars print karo
        {
            printf("*\n");
        }
        if (i != n - 1) // last block ke baad blank line nahi chahiye
        {
            printf("\n");
        }
    }

    return 0;
}
