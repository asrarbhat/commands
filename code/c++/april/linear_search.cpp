#include<iostream>

int linear_search(int[],int,int);

int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	for(int i=-5;i<15;i++)
	{
		std::cout<<linear_search(arr,8,i)<<std::endl;
	}
	return 0;
}

int linear_search(int arr[],int size, int key)
{
	for(int i=0;i<size;i++)
	{
		if (arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
