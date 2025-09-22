#include <stdio.h>

int main()
{
    // yaha bas har row me numbers badhte jayenge
    for (int i = 1; i <= 5; i++) // row loop
    {
        for (int j = 1; j <= i; j++) // row me 1 se i tak print karo
        {
            printf("%d", j);
        }
        printf("\n"); // row complete to new line
    }

    return 0;
}
