#include<stdio.h>

long int factorial(int);
long int iterative_factorial(int);
int main()
{
    printf("%ld\n",iterative_factorial(5));
    return 0;
}
long int factorial(int n)
{
    if (n<0)return -1;
    if (n==0)return 1;
    return n*factorial(n-1);
}
long int iterative_factorial(int n)
{
    if (n<0)return -1;
    long int result=1;
    for(int i=n;i>1;i--)
    {
        result*=i;
    }
    return result;
}