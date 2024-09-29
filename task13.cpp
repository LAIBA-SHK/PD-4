#include<iostream>
using namespace std;
void longesttime(int, int);
main()
{
 int h, m;
 cout<<"enter time in hours: ";
 cin>>h;
 cout<<"enter time in minutes: ";
 cin>>m;
 longesttime(h,m);
}
 void longesttime(int h , int m)
{
 int minutes= h* 60;
 if(minutes > m){
 cout<<h <<" hours";
}
 else if(minutes < m){
 cout<<m <<" minutes";
}
 else
  cout<<"equal";
}