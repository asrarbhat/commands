#include<stdio.h>

int fibonacci(int n);
int main()
{
	for(int i=1;i<10;i++)
	{
		printf("%d\n",fibonacci(i));
	}
	return 0;
}

int fibonacci(int n)
{
	if (n==1 || n==2) return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}
