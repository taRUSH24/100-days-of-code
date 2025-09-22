#include <stdio.h>

int main() 
{
    int num, temp, sum = 0; // num is original, temp is for breaking it
    scanf("%d", &num); // take input
    temp = num; // keep a copy cuz we will destroy temp in loop
    
    while (temp > 0) 
    {
        int digit = temp % 10; // last digit nikal liya
        int fact = 1; // factorial banayenge
        // ab is digit ka factorial nikalna hai
        for (int i = 1; i <= digit; i++) 
        {
            fact = fact * i; // multiply karte jao, normal factorial
        }
        sum = sum + fact; // collect karte jao factorial ka sum
        temp = temp / 10; // last digit hata do
    }
    
    // ab check karte hain original aur sum same hai kya
    if (sum == num) 
    {
        printf("strong number\n"); // matlab condition pass ho gayi
    } else 
    {
        printf("not strong number\n"); // warna strong nahi hai
    }
    
    return 0; 
}
