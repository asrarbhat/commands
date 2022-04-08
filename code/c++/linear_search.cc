#include<iostream>
int linear_search(int[],int);
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int key=9;
    std::cout<<linear_search(arr,key)<<std::endl;
    return 0;
}
int linear_search(int arr[],int key)
{

    for(int i=0;i<10;i++)
    {
        if (arr[i]==key) return i;
    }
    return -1;
}