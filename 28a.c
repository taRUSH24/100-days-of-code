#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // input le lo

    for (int num = 2; num <= n; num++) // 2 se n tak check karenge
    {
        int isPrime = 1; // assume karlo prime hai

        for (int i = 2; i <= num / 2; i++) // divide karke check karte hain
        {
            if (num % i == 0) // agar divide ho gaya to prime nahi hai
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) // prime nikla
        {
            printf("%d ", num);
        }
    }

    return 0;
}
