#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="abhay";
    int count=0;
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='a'||'e'||'i'||'o'||'u')
        count++;
        i++;
    }
    cout<<count;

}