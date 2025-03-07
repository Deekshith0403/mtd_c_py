#include<stdio.h>
int main()
{
    int a=13, b=2, c=-8;
    if(a <= b & (++b != --c || a > c++))
      puts("tadiamdamol");
    else
    puts("Pushpagiri");
    printf("%d %d %d \n", a,b,c);
}