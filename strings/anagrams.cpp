#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   string c,d;
   cout<<"enter the string c :";
   cin>>c;
   cout<<"enter theh string d: ";
   
   cin>>d;
   sort(c.begin(),c.end());
   sort(d.begin(),d.end());
   if(c==d)
   cout<<"it is a anagram";
   else
   cout<<"not an anagram";
}