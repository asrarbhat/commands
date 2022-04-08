#include<iostream>
#include<algorithm>

int main()
{
	int arr[]={1,2,3};
	//similarly for any other kind of object put arr.begin(),arr.end()
	std::cout<<*std::max_element(arr,arr+3)<<std::endl;
	std::cout<<std::max(1,2)<<std::endl;//works for two elements
	std::cout<<std::max({1,2,3,4})<<std::endl;//works
	std::cout<<std::min({1,2,3,4})<<std::endl;
	//to find index
	// //it would return iterator so be careful.and use distance() to find index
	auto var=std::find(arr,arr+3,2);
	std::cout<<*var<<std::endl;

	return 0;
}
