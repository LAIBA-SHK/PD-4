#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int,int);
main()
{
 int x=4,y=3;
 system("cls");
 printmaze();
 gotoxy(x,y);

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
