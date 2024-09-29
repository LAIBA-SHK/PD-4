#include<iostream>
using namespace std;
void equal(int , int);
int main()
{
 int num1,num2;
 system("cls");
 cout<<"Enter number 1: ";
 cin>>num1;
 cout<<"Enter number 2: ";
 cin>>num2;
 if(num1== num2)
 equal(num1,num2);
 else
  cout<<"FALSE";
}
 void equal(int num1,int num2)
{
 cout<<"TRUE"<<endl;
}
 
 