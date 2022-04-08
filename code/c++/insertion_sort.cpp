#include<iostream>
#include<vector>

std::vector<int> insertion_sort(std::vector<int>);
int main()
{
    std::vector<int> list {7,1,2,3,4,3,6,7,4,3};
    list=insertion_sort(list);
    for(int i=0;i<list.size();i++)
    {
        std::cout<<list[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
std::vector<int> insertion_sort(std::vector<int> arr)
{
    for(int i=1;i<arr.size();i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            else
            {
                break;
            }
        }
    }
    return arr;
}