#include<iostream>
#include<conio.h>
#include<math.h>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y){
HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X=x;
dwPos.Y=y;
SetConsoleCursorPosition(hcon,dwPos);
}
void farenheit_a_celsius(),celcius_a_farenheit(),kelvin_a_celcius(),celcius_a_kelvin();
main(){
int op;
do{
system("cls");
		gotoxy(25,4);cout<<"farenheit a celsius";
		gotoxy(25,6);cout<<"celcius a farenheit ";
		gotoxy(25,8);cout<<"kelvin a celcius ";
		gotoxy(25,10);cout<<"celcius a kelvin";
		gotoxy(25,12);cout<<"salir ";
		cin>>op;
		switch(op){
      case 1:
           farenheit_a_celsius();
           break;
       case 2:
           celcius_a_farenheit();
           break;
       case 3:
           kelvin_a_celcius();
           break;
       case 4:
           celcius_a_kelvin();
           break;
           }
	}while(op!=4);
}

void farenheit_a_celsius(){
	float c,f,g;
 	system("cls");
 	gotoxy(30,4);cout<<"ingresa una temperatura";
   cin>>c;
   g = c - 32 / 1.8;
   gotoxy(25,10);cout<<"la temperatura es: "<<g;
 	 	getch();
 }

 void celcius_a_farenheit(){
	float c,f,g;
 	system("cls");
 	gotoxy(30,4);cout<<"ingresa una temperatura";
   cin>>c;
   g = (c * 1.8) + 32;
   gotoxy(25,10);cout<<"la temperatura es: "<<g;
 	 	getch();
 }

 void kelvin_a_celcius(){
	float c,k,g;
 	system("cls");
 	gotoxy(30,4);cout<<"ingresa una temperatura";
   cin>>k;
   c = k - 273,15;
   gotoxy(25,10);cout<<"la temperatura es: "<<g;
 	 	getch();
 }

 void_farenheit_a_celsius(){
	float c,k,g;
 	system("cls");
 	gotoxy(30,4);cout<<"ingresa una temperatura";
   cin>>c;
   k = c + 273.15;
   gotoxy(25,10);cout<<"la temperatura es: "<<g;
 	 	getch();
 }

 void celcius_a_kelvin(){
	float c,f,g;
 	system("cls");
 	gotoxy(30,4);cout<<"ingresa una temperatura";
   cin>>c;
   g =( f - 32) / 1.8;
   gotoxy(25,10);cout<<"la temperatura es: "<<g;
 	 	getch();
 }



