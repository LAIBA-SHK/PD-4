#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int,int);
void movePlayer(int ,int);
main()
{
 int x=2,y=2;
 system("cls");
 printmaze();
 while(true)
{
 movePlayer(x,y);
 y=y+1;
 if(y==10)
 {
  y =2;
 }
}
while(true)
{
 movePlayer(x,y);
 y=y-1;
 if(y==2)
 {
  y =10;
}
}
 getch();
}
 void movePlayer(int x, int y)
{
 gotoxy(x,y);
 cout<<"P";
 Sleep(400);
 gotoxy(x,y);
 cout<<"   ";
}
 void printmaze()
{
 cout<<"########################## "<<endl;
 cout<<"#                        # "<<endl;
 cout<<"#                        # "<<endl;
 cout<<"#                        # "<<endl;
 cout<<"#                        # "<<endl;
 cout<<"#                        # "<<endl;
 cout<<"#                        # "<<endl;
 cout<<"#                        # "<<endl;
 cout<<"#                        # "<<endl;
 cout<<"#                        # "<<endl;
 cout<<"########################## "<<endl;
}
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
