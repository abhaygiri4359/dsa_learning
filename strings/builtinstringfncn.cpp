#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="abhay giri is at home";
    cout<<str.size()<<endl;
    str.push_back('d');
    str.push_back('r');
    str.push_back('y');
    str.pop_back();
    str.pop_back();
    str.pop_back();
    str=str+" tarkulwa";
    
    cout<<str;


}