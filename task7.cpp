#include<iostream>
using namespace std;
void printmenu();
void calculateaggregate(string,float,float,float);
void comparemarks(string , float,string ,float);
main()
{
 string name;
 float matric,inter,ecat;
 string name1,name2;
 float marks1,marks2;
 int select;
 system("cls");
 printmenu();
 cout<<"Select ";
 cin>>select;
 if(select==1)
{
 calculateaggregate(name,matric,inter,ecat);
}
 else if(select==2)
{
 comparemarks(name1,marks1,name2,marks2);
 }
  else if(select==3)
{
  cout<<"exiting the program"<<endl;
}
 else
{
  cout<<"invalid"<<endl;
}
 
}
 void printmenu()
{
 cout<<"##    ##  ##    ##  ###### ##     ##  ######  #####    ####   ###### ###### ##    ##      ###    #####   ##     ##  ######    ###      ###    ######    #####    ##   ##"<<endl;
 cout<<"##    ##  ## #  ##    ##   ##     ##  ##      ##  ##  ##   ##   ##     ##    ##  ##     ##   ##  ##  ##  ###   ###    ##    ##   ##  ##   ##    ##    ##     ##  ## # ##"<<endl;
 cout<<"##    ##  ##  # ##    ##   ##     ##  #####   ## ##     ###     ##     ##      ##       ##   ##  ##  ##  ## ### ##    ##      ###      ###      ##    ##     ##  ##  ###"<<endl;
 cout<<"##    ##  ##   ###    ##    ##   ##   ##      ####        ##    ##     ##      ##       #######  ##  ##  ##  #  ##    ##        ##       ##     ##    ##     ##  ##  ###"<<endl;
 cout<<"##    ##  ##   ###    ##     #####    ##      ##  ##  ##   ##   ##     ##      ##       ##   ##  ##  ##  ##     ##    ##    ##   ##  ##   ##    ##    ##     ##  ##   ##"<<endl;
 cout<<" ######   ##    ##  ######    ###     ######  ##   ##  ####   ######   ##      ##       ##   ##  #####   ##     ##  ######   #####    #####   ######    #####    ##   ##"<<endl;
 cout<<"                                                                                                                                                                         "<<endl;
 cout<<"                                                      #####      ##    ##     #####     ######    #######    ###    ###                                                "<<endl;
 cout<<"                                                     ##    ##     ##  ##     ##    ##     ##      ##         ## #### ##                                                "<<endl;
 cout<<"                                                       ###          ##         ###        ##      ##         ##  ##  ##                                                "<<endl;
 cout<<"                                                          ##        ##            ##      ##      ######     ##      ##                                                "<<endl;
 cout<<"                                                     ##    ##       ##       ##    ##     ##      ##         ##      ##                                                "<<endl;
 cout<<"                                                      #####         ##        #####       ##      #######    ##      ##                                                "<<endl;

 cout<<"  1.Calculate Aggregate   "<<endl;
 cout<<"  2.Compare ECAT Marks    "<<endl;
 cout<<"  3.Exit                 "<<endl;
}
 void  calculateaggregate(string name,float matric,float inter,float ecat)
{
 
 cout<<"Enter name: ";
 cin>>name;
 cout<<"Enter Matric marks: ";
 cin>>matric;
 cout<<"Enter inter marks: ";
 cin>>inter;
 cout<<"Enter Ecat Marks: ";
 cin>>ecat;
 float aggregate=((matric/1100)*0.30 + (inter/550)*0.30 + (ecat/400)*0.40)*100;
 cout<<"Aggregate: "<<aggregate<<"%"<<endl;
}
  void comparemarks(string name1,float marks1, string name2, float marks2)
{
  
  cout<< "Name of first student: ";
  cin>>name1;
  cout<<"ECAT marks of first Student: ";
  cin>>marks1;
  cout<<"Name of 2nd student: ";
  cin>>name2;
  cout<<"ECAT Marks of 2nd student: ";
  cin>>marks2;
  if(marks1 > marks2)
   cout<<name1<<"  will get the first roll no."<<endl;
  else if(marks1 < marks2)
   cout<<name2<<"  will get the first roll no."<<endl;
  else
   cout<<"Both have equal marks";
}
