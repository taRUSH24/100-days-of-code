#include <stdio.h>

int main()
{
    long long num;
    scanf("%lld", &num); // number input

    int count[10] = {0}; // digit frequency array

    // break number into digits
    while (num > 0)
    {
        int digit = num % 10; // last digit
        count[digit]++;       // increase frequency
        num = num / 10;       // remove last digit
    }

    int maxDigit = 0;
    int maxCount = count[0];

    for (int i = 1; i < 10; i++) // check which digit has max frequency
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}
