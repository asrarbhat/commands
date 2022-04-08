#include<iostream>

void selection_sort(int [],int);
void bubble_sort(int [],int);


int main()
{
    int arr[]={3,2,1,7,6,5,4,8,9};
    int size=9;
    bubble_sort(arr,size);
    for(int i=0;i<size;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}

void selection_sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if (arr[i]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
void bubble_sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                
            }
        }
    }
}