#include <stdio.h>

int main()
{
    // 5 rows ka pattern banana hai
    for (int i = 0; i < 5; i++) // i row number hai
    {
        // pehle space print hoga
        for (int s = 0; s < i; s++) // jitna row number utne space
        {
            printf(" ");
        }
        // ab stars print karte hain
        for (int j = 0; j < 5 - i; j++) // har row me stars ghatte jayenge
        {
            printf("*");
        }
        printf("\n"); // row khatam to new line
    }

    return 0;
}
