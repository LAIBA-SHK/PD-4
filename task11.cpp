#include<iostream>
using namespace std;
void checkspeed(int);
main()
{
 int speed;
 cout<<"enter speed in km/h: ";
 cin>>speed;
 checkspeed(speed);

}
 void checkspeed(int speed)
{
 if(speed>100)
 cout<<" Your car will be challenged!!"<<endl;
 else
 cout<<" Car is following the speed limit!!"<<endl;
}
