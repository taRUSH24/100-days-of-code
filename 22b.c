#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n); // input le lo
    float sum = 0; // sum rakhenge yaha
    int num = 1; // numerator shuru hoga 1 se
    int den = 1; // denominator bhi 1 se start karega

    for (int i = 1; i <= n; i++) // loop chalega n terms tak
    {
        // har term ka num/den karna hai
        float term = (float)num / den;
        sum = sum + term; // add karte jao

        // ab agle term ke liye numerator 2 se badhega
        num = num + 2;
        // aur denominator bhi 1 se badhega
        den = den + 1;
    }

    printf("Approximate sum: %.1f\n", sum); // bas ek decimal tak print karna hai

    return 0;
}
