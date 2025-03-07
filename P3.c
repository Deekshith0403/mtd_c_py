#include <stdio.h>

int main() 
{
    int num;
    puts("Enter a number: ");
    scanf("%d", &num);

    while (num >= 10) 
    {  
        int sumofdigits = 0;
        while (num > 0) {
            sumofdigits += num % 10; 
            num /= 10;       
        }
        num = sumofdigits; 
    }
    printf("single digit: %d\n", num);
    return 0;
}