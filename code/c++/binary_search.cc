#include<iostream>
int binary_search(int[],int,int);
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int key=-1;
    int size=10;
    std::cout<<binary_search(arr,key,size)<<" "<<std::endl;
    return 0;
}
int binary_search(int arr[],int key,int size)
{
    int left=0;
    int right=size-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if (arr[mid]==key) return mid;
        if (arr[mid]>key) right=mid-1;
        if (arr[mid]<key) left=mid+1;
    }
    return -1;
}