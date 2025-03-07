#include<stdio.h>
int main() 
{
    int inutNum = 0;
    puts("Enter a number to check if it is Even");
    scanf("%d", &inutNum);
    if(inutNum % 2 == 0)
      printf("%d is Even", inutNum);
    else
      printf("%d is not an even number", inutNum);
    return 0;

}