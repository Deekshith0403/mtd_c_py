#include <stdio.h>

int main() 
{
    int num =0;
        printf("Enter a number to get the multiplication table: ");
    scanf("%d", &num);
        printf("Multiplication Table of %d:\n", num);
    for(int i = 1; i <= 20; i++) 
    {
        printf("%d x %2d = %3d\n", num, i, num * i);
    }

    return 0;
}
