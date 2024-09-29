#include<iostream>
using namespace std;
void bonus(int,int);
main()
{
 int x,y;
 cout<<"Enter your position: ";
 cin>>x;
 cout<<"Enter frnd's position: ";
 cin>>y;
 bonus(x,y);

}
 void bonus(int x,int y)
{
 if((y-x)>=1 && (y-x)<=6)
  cout<<"true";
 else
  cout<<"False";
}
 