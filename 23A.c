#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // input le lo

    float sum = 0; // yaha store hoga total
    int num = 2;   // numerator 2 se start
    int den = 3;   // denominator 3 se start

    for (int i = 1; i <= n; i++) // n terms tak chalna hai
    {
        float term = (float)num / den; // ek ek term nikalna hai
        sum = sum + term; // sum me add karte jao

        num = num + 2; // numerator har bar 2 se badhega
        den = den + 4; // denominator har bar 4 se badhega
    }

    printf("Approximate sum: %.2f\n", sum); // 2 decimal tak print karna hai

    return 0;
}
