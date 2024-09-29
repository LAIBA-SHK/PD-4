#include<iostream>
using namespace std;
void pet(int);
main()
{
 int holidays;
 cout<<"enter no. of holidays: ";
 cin>>holidays;
 pet(holidays);
}
 void pet(int holidays)
{
 int workingdays,gametime,difference;
 int norm= 30000;
 workingdays= 365-holidays;
 gametime= workingdays*63+20*127;
 difference=norm - gametime;
 if(difference>0){
  cout<<"tom will sleep well"<<endl;
}
 else{
  cout<<"tom will ran away"<<endl;
 }
  int hours=abs(difference)/60;
  int minutes=abs(difference)%60;
  cout<<endl<<"Difference from the norm is: "<<hours<< " hours "<<minutes<<" minutes";
}