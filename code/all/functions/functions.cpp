#include<iostream>

int fibonacci(int n);
int main()
{
	for(int i=1;i<10;i++)
	{
		std::cout<<fibonacci(i)<<std::endl;
	}
	return 0;
}

int fibonacci(int n)
{
	int first=1,second=1;
	int temp;
	for(int i=1; i<=n-1;i++)
	{
		temp = first+second;
		first=second;
		second=temp;
	}
	return first;
}
