#include<iostream>

int binary_search(int[],int,int);
int r_binary_search(int arr[], int size, int key);

int main()
{
	int arr[]={0,1,2,3,4,5,6,7};
	for (int i=-5;i<15;i++)
	{
		std::cout<<r_binary_search(arr,8,i)<<std::endl;
	}
	return 0;
}

int binary_search(int arr[],int size,int key)
{
	int first_index=0;
	int last_index=size-1;
	int mid;

	while(first_index<=last_index)
	{
		mid=(first_index+last_index)/2;
		if (arr[mid]==key)
		{
			return mid;
		}
		if (arr[mid]>key)
		{
			last_index=mid-1;
		}
		else{
			first_index=mid+1;
		}
	}
	return -1;
}
int r_binary_search(int arr[], int size, int key)
{
	if ( size == 0 )
	{
		return -1;
	}

	int mid = (size-1) / 2;

	if ( arr[mid] == key )
	{
		return mid;
	}
	

	if ( arr[mid] > key )
	{
		int size1 = mid;
		int arr1[size1];
		for(int i=0;i<size1;i++) 
		{
			arr1[i]= arr[i];
		}
		return r_binary_search( arr1, size1, key);
	}
	int size1 = size-(mid+1);
	int arr1[size1];
	for(int i=0;i<size1;i++)
	{
		arr1[i]=arr[mid+1+i];
	}
	int index= r_binary_search( arr1, size1, key);
	if (index==-1) return -1;
	return (mid + 1) + index;
}
