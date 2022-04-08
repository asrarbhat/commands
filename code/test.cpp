#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string str="0123456789";
    cout<<str.size()<<endl;
    cout<<str[7]<<endl;
    cout<<str.find("456")<<endl;
    cout<<str.substr(3,5)<<endl;//from 3 5 elements
    cout<<str+"hello"<<endl;
        // print(string.upper(),string.lower())
    cout<<str<<endl;
    return 0;
}