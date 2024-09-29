#include<iostream>
using namespace std;
void flowershop(int, int,int);
main()
{
 int redRose,whiteRose,tulip;
 cout<<"RED ROSES: ";
 cin>>redRose;
 cout<<"WHITE ROSES: ";
 cin>>whiteRose;
 cout<<"TULIPS : ";
 cin>>tulip;
 flowershop(redRose,whiteRose,tulip);
 
}
 void flowershop(int redRose, int whiteRose,int tulip)
{
 float originalprice,dis;
 originalprice= (redRose*2.00)+(whiteRose*4.10)+(tulip*2.50);
 cout<<"Original price: $"<<originalprice<<endl;
 if(originalprice>=200)
 {
 dis=originalprice*0.20;
 int finalprice= originalprice- dis;
 cout<<"final price after discount is: $"<<finalprice;
 }
 else
{
  cout<<"no discount applied"; 
 }
}

