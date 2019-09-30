#include<iostream.h>
#include<conio.h>
#include<dos.h>

int main()
{
clrscr();
 int i,j;
 for(i=1;i<=80;i++)
 {
  gotoxy(i,1);
  cout<<"*";
  delay(30);
 }
 for(j=1;j<=24;j++)
 {
  gotoxy(80,j);
  cout<<"*";
  delay(30);
 }
 for(i=80;i>=1;i--)
 {
  gotoxy(i,24);
  cout<<"*";
  delay(30);
 }
 for(j=24;j>=1;j--)
 {
  gotoxy(1,j);
  cout<<"*";
  delay(30);
 }
 gotoxy(30,2);
 cout<<"JIIT NOIDA SECTOR-62";
 delay(100);
 gotoxy(32,6);
 cout<<"SDF PROJECT";
 delay(200);
 gotoxy(25,10);
 cout<<"Topic-    ELECTRONIC VOTING MACHINE";
 delay(300);
 gotoxy(32,14);
 cout<<"SESSION - 2018-19";
 delay(400);
 gotoxy(60,19);
 cout<<"Submitted By";
 delay(500);
 gotoxy(60,20);
 cout<<"SHIVANG SHARMA";
 delay(600);
 gotoxy(60,21);
 cout<<"AKSHIT JOSHI";
 delay(600);
 gotoxy(60,22);
 cout<<"AJAY JADON";
 delay(600);
 gotoxy(60,23);
 cout<<"VATSAL MITTAL";
 delay(700);
 gotoxy(5,19);
 cout<<"Submitted To";
 delay(500);
 gotoxy(5,20);
 cout<<"ARPITA JADHAV";
 delay(600);
 gotoxy(5,21);
 cout<<"(SDF Teacher)";
 delay(700);
 getch();
 return 0;
}
