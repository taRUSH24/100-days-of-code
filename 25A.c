#include <stdio.h>

int main()
{
    // har row ka start number alag hai aur end hamesha 5 hai
    for (int i = 5; i >= 1; i--) // row decide karega kaha se start karna hai
    {
        for (int j = i; j <= 5; j++) // row ka start se lekar 5 tak print karo
        {
            printf("%d", j);
        }
        printf("\n"); // row complete to naya line
    }

    return 0;
}
