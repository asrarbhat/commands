#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> list;
    list.push_back(1);
    list.push_back(2);
    list.pop_back();
    list.insert(list.begin(),77);
    list.insert(list.begin()+1,88);
    list.erase(list.begin()+1);
    cout<<list.size()<<endl;
    list.at(1)=3;
    list[0]=99;
    // list.clear();
    //max is in <algorithm> std::max(3,4);
    for(int i=0;i<list.size();i++)
    {
        cout<<list[i]<<" ";
    }
    cout<<endl;
    return 0;
}