#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
long factorial(int);
int main(){
    // cout<<"hello world!"<<endl;
    // short short_integer;
    // short_integer=33;
    // cout<<short_integer;
    // int integer=33;
    // long long_integer=34;
    // unsigned short us=33;
    // unsigned int ui=234;
    // unsigned long ul=44;
    // cout<<integer<<long_integer<<us<<ui<<ul<<endl;
    // char ch='a';
    // cout<<ch;//prints the character
    // cout<<ch+3;//prints the integer
    // float floating_point=3.3f;
    // double double_precision=4.444;
    // cout<<floating_point;
    // cout<<double_precision;

    // bool is_there=false;
    // cout<<is_there;//prints 1 and 0 for booleans

    // string str="hi there beautiful";
    // string st;
    // st="hello world";
    // cout<<st;

    // taking inputs 
        // int integer;
        // cin>>integer;
        // double double_precision;
        // cin>>double_precision;
        // char ch;
        // cin>>ch;
        // bool b;
        // cin>>b;
        // cout<<integer<<double_precision<<ch<<b;

    // string str;
    // cin>>str;//only reads one token
    // getline(cin,str);
    // cout<<str;

    // typecasting
    // int n=(int)3.3;
    // cout<<n;
    // double d=(double) 4;
    // cout<<d;

    // int n=333;
    // string s=to_string(n);
    // cout<<s;
    // string s="3";
    // int n=stoi(s);
    // cout<<n;
    // string d="3.33";
    // double m=stod(d);
    // cout<<m;

    // cout<<factorial(5);
    // cout<<factorial(-3);
    // cout<<factorial(0);
    // vector<int> vec;
    // vec.reserve(100);
    
    // // cout<<vec.size(); 0
    // vec.push_back(3);
    // vec.emplace_back(34);
    // // vec.pop_back();
    // vec.emplace(vec.begin()+1,33);
    // vec.emplace(vec.begin(),9);
    // vec.insert(vec.begin(),99);
    // vec.erase(vec.begin());
    // cout<<vec[3];

    // for(auto value: vec)cout<<value<<endl;

    // map<int,int> hashmap;
    // hashmap[3]=4;
    // hashmap[4]=8;
    // hashmap[5]=5;
    // cout<<hashmap[99];//returns 0 if key not there
    
    return 0;
}
long factorial(int positive_number){
    if (positive_number<0) return -1;
    long result=1;
    for(int i=1;i<=positive_number;i++)result*=i;
    return result;
}