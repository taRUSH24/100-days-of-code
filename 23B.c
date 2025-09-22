#include <stdio.h>

int main()
{
    // bas 5 rows aur 5 columns ka star banana hai
    for (int i = 1; i <= 5; i++) // row ke liye loop
    {
        for (int j = 1; j <= 5; j++) // column ke liye loop
        {
            printf("*"); // star print karte jao
        }
        printf("\n"); // ek row khatam to new line
    }

    return 0;
}
