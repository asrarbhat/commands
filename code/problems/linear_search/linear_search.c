#include<stdio.h>

int linear_search(int[],int,int);

int main()
{
	int arr[]={1,2,3,7,6};
	int n=5;
	for(int i=0;i<10;i++)
	{
		printf("%d\n",linear_search(arr,i,n));
	}
	return 0;
}
int linear_search(int arr[],int key,int size)
{
	for (int i=0;i<size;i++)
	{
		if (arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
