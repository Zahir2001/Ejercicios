//Proyecto C++, menu con diferentes opciones como encriptar, convertir de base 10 a 16 y viceversa y con la opcion de salir.
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <windows.h>

using namespace std;

void menu_principal();
void encriptar();
void decimal();
void hexadecimal();

//Manipular las posición de lo que se muestre en pantalla
void gotoxy (int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

int main()
{	
	system("color 8b");
	
	menu_principal();
	
	return 0;
}

//Menu del proyecto
void menu_principal()
{
	bool repite = true;
	int opcion;
	
	do{
		system("cls");
		
		gotoxy(28,2); cout<<"CCCCCC";
		gotoxy(27,3); cout<<"C";
		gotoxy(26,4); cout<<"C";
		gotoxy(26,5); cout<<"C";
		gotoxy(26,6); cout<<"C";
		gotoxy(26,7); cout<<"C";
		gotoxy(27,8); cout<<"C";
		gotoxy(28,9); cout<<"CCCCCC";
		
		gotoxy(40,3); cout<<"++";
		gotoxy(40,4); cout<<"++";
		gotoxy(40,5); cout<<"++";
		gotoxy(40,6); cout<<"++";
		gotoxy(40,7); cout<<"++";
		gotoxy(40,8); cout<<"++";
		gotoxy(37,5); cout<<"+++";
		gotoxy(37,6); cout<<"+++";
		gotoxy(42,5); cout<<"+++";
		gotoxy(42,6); cout<<"+++";
		
		gotoxy(50,3); cout<<"++";
		gotoxy(50,4); cout<<"++";
		gotoxy(50,5); cout<<"++";
		gotoxy(50,6); cout<<"++";
		gotoxy(50,7); cout<<"++";
		gotoxy(50,8); cout<<"++";
		gotoxy(47,5); cout<<"+++";
		gotoxy(47,6); cout<<"+++";
		gotoxy(52,5); cout<<"+++";
		gotoxy(52,6); cout<<"+++";
		
		gotoxy(23,11); cout<<"***********************************";
		gotoxy(23,12); cout<<"*";
		gotoxy(23,13); cout<<"*";
		gotoxy(23,14); cout<<"*";
		gotoxy(27,13); cout<<"MENU PRINCIPAL DEL PROYECTO"; 
		gotoxy(57,12); cout<<"*";
		gotoxy(57,13); cout<<"*";
		gotoxy(57,14); cout<<"*";
		gotoxy(23,15); cout<<"***********************************";
		
		gotoxy(26,17); cout<<"1. Encriptar.";
		gotoxy(26,19); cout<<"2. Convertir de Base 10 a 16.";
		gotoxy(26,21); cout<<"3. Convertir de Base 16 a 10.";
		gotoxy(26,23); cout<<"4. Salir.";
		
		gotoxy(26,26); cout<<"Escoja cualquiera de la opciones: ";
		cin>>opcion;
		
		switch (opcion){
			
			case 1:
				encriptar();
				break;
			
			case 2:
				decimal();
				break;
				
			case 3:
				hexadecimal();
				break;
				
			case 4:
				repite = false;
				break;
		}

	} while (repite);
}

//Encriptar palabras
void encriptar()
{
	system("cls");
	
	gotoxy(32,2); cout<<"******************";
	gotoxy(32,3); cout<<"*";
	gotoxy(32,4); cout<<"*";
	gotoxy(32,5); cout<<"*";
	gotoxy(35,4); cout<<"ENCRIPTACION";
	gotoxy(49,3); cout<<"*";
	gotoxy(49,4); cout<<"*";
	gotoxy(49,5); cout<<"*";
	gotoxy(32,6); cout<<"******************";
	
	char cadena[50];
	gotoxy(17,8);  cout<<"----------------------------------------------";
	gotoxy(19,10); cout<<"Introduzca la palabra que desea encriptar: ";
	gotoxy(36,12); cin>>cadena;
	gotoxy(17,14); cout<<"----------------------------------------------";
	gotoxy(29,16); cout<<"Su palabra encriptada es: ";
	
	for (int i=0; i<=50; i++)
	{
		switch(cadena[i]){
			
			case 'd':
				cadena[i]=48;
				break;
				
			case 'e':
				cadena[i]=49;
				break;
				
			case 'p':
				cadena[i]=50;
				break;
				
			case 'u':
				cadena[i]=51;
				break;
				
			case 'r':
				cadena[i]=52;
				break;
				
			case 'a':
				cadena[i]=53;
				break;
				
			case 't':
				cadena[i]=54;
				break;
				
			case 'i':
				cadena[i]=55;
				break;
				
			case 'v':
				cadena[i]=56;
				break;
				
			case 'o':
				cadena[i]=57;
				break;
				default: cadena[i]=cadena[i];
		}
	}
	gotoxy(36,18); cout<<cadena;
	
	getch();
	system("cls");
}

//Convertir de base 10 a 16
void decimal(){
	
	system("cls");
	
	gotoxy(22,2); cout<<"************************************";
	gotoxy(22,3); cout<<"*";
	gotoxy(22,4); cout<<"*";
	gotoxy(22,5); cout<<"*";
	gotoxy(25,4); cout<<"CONVERTIR DE BASE 10 A BASE 16";
	gotoxy(57,3); cout<<"*";
	gotoxy(57,4); cout<<"*";
	gotoxy(57,5); cout<<"*";
	gotoxy(22,6); cout<<"************************************";
	
	int ditohex[20];
	int i =0, decimal, residuo, resultado;
	gotoxy(17,8); cout<<"----------------------------------------------";
	gotoxy(24,10); cout<<"Introduzca el numero a convertir: ";
	gotoxy(38,12); cin>>decimal;
	gotoxy(17,14); cout<<"----------------------------------------------";
	do{
		residuo=decimal%16;
		resultado=decimal/16;
		ditohex[i]=residuo;
		decimal=resultado;
		i++;
	}
	while(resultado>15);
	ditohex[i]=resultado;
	gotoxy(32,16); cout<<"El valor es: ";
	for (int j=i; j>=0; j--){
		
		if (ditohex[j]==10)
		{
			cout<<"A";
		}
		else if (ditohex[j]==11)
		{
			cout<<"B";
		}
		else if (ditohex[j]==12)
		{
			cout<<"C";
		}
		else if (ditohex[j]==13)
		{
			cout<<"D";
		}
		else if (ditohex[j]==14)
		{
			cout<<"E";
		}
		else if (ditohex[j]==15)
		{
			cout<<"F";
		}
		else{
			cout<<ditohex[j];
		}
	}
	getch();
	system("cls");
}

//Convertir de base 16 a 10
void hexadecimal(){
	
	system("cls");
	
	gotoxy(22,2); cout<<"************************************";
	gotoxy(22,3); cout<<"*";
	gotoxy(22,4); cout<<"*";
	gotoxy(22,5); cout<<"*";
	gotoxy(25,4); cout<<"CONVERTIR DE BASE 16 A BASE 10";
	gotoxy(57,3); cout<<"*";
	gotoxy(57,4); cout<<"*";
	gotoxy(57,5); cout<<"*";
	gotoxy(22,6); cout<<"************************************";
	
	char hexa[100];
	int sum=0, i, len, j=0;
	
	gotoxy(17,8); cout<<"----------------------------------------------";
	gotoxy(24,10); cout<<"Introduzca el numero a convertir: ";
	gotoxy(39,12); cin>>hexa;
	gotoxy(17,14); cout<<"----------------------------------------------";
	len= strlen(hexa);
	
	for (i=len-1; i>=0; i--)
	{
		if (hexa[i]>='0' && hexa[i]<='9')
		{
			sum=sum+(hexa[i]-48)*pow(16,j);
			j++;
		}
		else if (hexa[i]>='a' && hexa[i]<='f')
		{
			sum=sum+(hexa[i]-87)*pow(16,j);
			j++;
		}
		else if (hexa[i]>='A' && hexa[i]<='F')
		{
			sum=sum+(hexa[i]-55)*pow(16,j);
			j++;
		}
	}
	gotoxy(32,16); cout<<"El valor es: "<<sum;
	getch();
	system("cls");
}
