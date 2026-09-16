#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"please enter a string";
    string c;
    cin>>c;
    sort(c.begin(),c.end());
    cout<<c;
}