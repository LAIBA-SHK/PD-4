#include<iostream>
using namespace std;
void finalprice(string , float);
main()
{
 string name;
 float ticketprice;
 while(true)
{
 cout<<"Enter country's name: ";
 cin>>name;
 cout<<"Enter ticket price: $";
 cin>>ticketprice;
 finalprice(name,ticketprice);
 }
}
 void finalprice(string name, float ticketprice)
{ 
 float dis,finalprice;
 if(name=="Pakistan")
{
 dis = ticketprice*0.05;
 finalprice = ticketprice- dis;
 cout<<"Final price of ticket is: $"<<finalprice<<endl;
}
 else if (name== "India"){
 dis = ticketprice*0.20;
 finalprice = ticketprice- dis;
 cout<<"Final price of ticket is: $"<<finalprice<<endl;
}
 else if(name=="Ireland"){
 dis = ticketprice*0.10;
 finalprice = ticketprice-dis;
 cout<<"Final price of ticket is: $"<<finalprice<<endl;
}
 else if(name=="England"){
 dis = ticketprice*0.30;
 finalprice = ticketprice-dis;
 cout<<"Final price of ticket is: $"<<finalprice<<endl;
}
 else if(name=="Canada"){
 dis = ticketprice*0.45;
 finalprice = ticketprice-dis;
 cout<<"Final price of ticket is: $"<<finalprice<<endl;
}
 else
   cout<<"Invalid choice";
}
 