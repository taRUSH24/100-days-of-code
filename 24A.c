#include <stdio.h>

int main()
{
    // bas rows me stars badhate jana hai
    for (int i = 1; i <= 5; i++) // i row number hai
    {
        for (int j = 1; j <= i; j++) // har row me utne hi stars jitna row number
        {
            printf("*");
        }
        printf("\n"); // row khatam, new line
    }

    return 0;
}
