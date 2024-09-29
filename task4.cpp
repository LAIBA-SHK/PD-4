#include<iostream>
#include<windows.h>
using namespace std;
void printname(string name);
void gotoxy(int , int);
main()
{
 int x= 30;
 int y= 20;
 string name;
 system("cls");
 gotoxy(x,y);
 printname(name);
 

}
 void printname(string name)
 {
 
  cout<<"enter name: ";
  cin>>name;

}
 void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}