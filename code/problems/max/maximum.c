#include <stdio.h>

int maximum(int first,int second,int third)
{
	if (first>=second)
	{
		if (first>=third)
		{
			return first;
		}
		return third;
	}
	else
	{
		if (second>=third)
		{
			return second;
		}
		return third;
	}
}
int max_of_array(int[],int);
int main()
{
	printf("%d %d %d %d\n",maximum(1,2,3),maximum(4,3,2),maximum(4,5,3),maximum(1,2,2));
	int arr[]={1,2,3,5,4};
	printf("%d\n",max_of_array(arr,5));
	return 0;
}
int max_of_array(int arr[],int n)
{
	int maximum=arr[0];
	for(int i=1;i<n;i++)
	{
		if (arr[i]>maximum)
		{
			maximum=arr[i];
		}
	}
	return maximum;
}
