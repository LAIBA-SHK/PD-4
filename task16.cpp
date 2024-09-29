#include<iostream>
using namespace std;
void checktp(int,int);
main()
{
 int people,tp;
 cout<<"enter no. of people: ";
 cin>>people;
 cout<<"enter no. of rolls: ";
 cin>>tp;
 checktp(people,tp);
}
 void checktp(int people,int tp)
{
 int sheetperroll=500;
 int averageuse= 57;
 int days= (sheetperroll * tp)/(averageuse*people);
 if(days<=14)
 {
  cout<<"your tp will last only "<<days<< " days buy more! "<<endl;
 }
  else{
   cout<<"Your tp will last"<<days<<" days, no need to panic!"<<endl;
 }
}
