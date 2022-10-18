#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>

using namespace std;

void gotoxy(int x1, int y1){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x1;
	dwPos.Y = y1;
	SetConsoleCursorPosition(hcon, dwPos);
}

char opcion;
int x=10, y=10;

void getOpcion1();
void getOpcion2();
void getOpcion3();
void getOpcion4();
void getOpcion5();
void getOpcion6();
void getOpcion7();
void getOpcion8();
void getOpcion9();
void getOpcion10();
void getOpcion11();
void getOpcion12();
void getOpcion13();
void getOpcion14();
void getOpcion15();
void getOpcion16();


int main(){
	int op;
	
	do{
		system("cls");
		cout<<"(1) Suma, Resta, Multiplicacion y Division de dos numeros"<<endl;
		cout<<"(2) Ver si un numero es par o impar"<<endl;
		cout<<"(3) Conversion de Km a M, m a pulg, lb a kg y viceversa"<<endl;
		cout<<"(4) Ver si una palabra o un numero es palindromo"<<endl;
		cout<<"(5) Conversion de numeros arabigos a romanos"<<endl;
		cout<<"(6) Conversion de numeros enteros a letras"<<endl;
		cout<<"(7) conversion de numeros enteros con decimal a letras"<<endl;
		cout<<"(8) Obtener una tabla de multiplicar"<<endl;
		cout<<"(9) Todas las tablas de multiplicar del 1 al 10"<<endl;
		cout<<"(10) Multiplicar dos numeros enteros de forma manual con grafica"<<endl;
		cout<<"(11) Conversion de numeros decimales a binarios"<<endl;
		cout<<"(12) Conversion de numeros decimales a hexadecimales"<<endl;
		cout<<"(13) Crear Figuras Geometricas Basicas"<<endl;
		cout<<"(14) Mover un punto en toda la pantalla (usar w,a,s,d para moverse y z para salir)"<<endl;
		cout<<"(15) Simular un Cajero Automatico (Automata)"<<endl;
		cout<<"(16) Calcular la hipotenusa"<<endl;
		cout<<"(17) salir del programa"<<endl;
		cout<<"Cual desea realizar: ";
		cin>>op;
		switch(op){
			case 1:
				system("cls");
				cout<<"opcion 1"<<endl;
				getOpcion1();
				system("pause");
			break;
			case 2:
				system("cls");
				cout<<"opcion 2"<<endl;
				getOpcion2();
				system("pause");
			break;
			case 3:
				system("cls");
				cout<<"opcion 3"<<endl;
				getOpcion3();
				system("pause");
			break;
			case 4:
				system("cls");
				cout<<"opcion 4"<<endl;
				getOpcion4();
				system("pause");
			break;
			case 5:
				system("cls");
				cout<<"opcion 5"<<endl;
				getOpcion5();
				system("pause");
			break;
			case 6:
				system("cls");
				cout<<"opcion 6"<<endl;
				getOpcion6();
				system("pause");
			break;
			case 7:
				system("cls");
				cout<<"opcion 7"<<endl;
				getOpcion7();
				system("pause");
			break;
			case 8:
				system("cls");
				cout<<"opcion 8"<<endl;
				getOpcion8();
				system("pause");
			break;
			case 9:
				system("cls");
				cout<<"opcion 9"<<endl;
				getOpcion9();
				system("pause");
			break;
			case 10:
				system("cls");
				cout<<"opcion 10"<<endl;
				getOpcion10();
				system("pause");
			break;
			case 11:
				system("cls");
				cout<<"opcion 11"<<endl;
				getOpcion11();
				system("pause");
			break;
			case 12:
				system("cls");
				cout<<"opcion 12"<<endl;
				getOpcion12();
				system("pause");
			break;
			case 13:
				system("cls");
				cout<<"opcion 13"<<endl;
				getOpcion13();
				system("pause");
			break;
			case 14:
				system("cls");
				cout<<"opcion 14"<<endl;
				getOpcion14();
				system("pause");
			break;
			case 15:
				system("cls");
				cout<<"opcion 15"<<endl;
				getOpcion15();
				system("pause");
			break;
			case 16:
				system("cls");
				cout<<"opcion 16"<<endl;
				getOpcion16();
				system("pause");
			break;
			case 17:
				system("cls");
				cout<<"\n\n\tGracias por utilizar el programa :)"<<endl;
			break;
			default:
				system("cls");
				cout<<"No elijio ninguna opcion"<<endl;
				system("pause");
				
			break;
		}
	}while(op != 17);
return 0;
}

void getOpcion1(){
	int opcion;

float primero=1;

float segundo=1;

float resultado;
	
	cout << "Que operacion desea realizar:" << endl;
    cout << "Suma [1]."<<endl;
    cout << "Resta [2]."<<endl;
    cout << "Multiplicacion [3]."<<endl;
    cout << "Division [4]."<<endl;
    cin >> opcion;
    
cout << "Ingrese un numero: ";
cin >> primero;
cout << "Ingrese un numero: ";
cin >> segundo;

if (opcion==1){
    resultado = primero+segundo;
}
if (opcion==2){
    resultado = primero-segundo;
}
if (opcion==3){
    resultado = primero*segundo;
}
if (opcion==4){
    resultado = primero/segundo;
}

cout <<"El resultado de la operacion es de: " << resultado<<endl;

cin.ignore();

cin.get();

}

void getOpcion2(){
	int n;
	cout<<"Ingresa un numero: ";
	cin>>n;
	if (n % 2 ==0){
		cout<<"El numero es par"<<endl;
	}
	else{
		cout<<"El numero es impar"<<endl;
	}
}

void getOpcion3(){
	int opcion;
	double km, mi, m, pulg, lb, kg;
	
	cout<<"1. Kilometros a millas"<<endl;
	cout<<"2. millas a kilometros"<<endl;
	cout<<"3. metros a pulgadas"<<endl;
	cout<<"4. pulgadas a metros"<<endl;
	cout<<"5. libras a kilos"<<endl;
	cout<<"6. kilos a libras"<<endl;
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
	
	switch (opcion){
		case 1:
			system("cls");
			cout<<"----- Kilometros a millas-----"<<endl;
			cout<<"Ingrese la cantidad de kilometros a convertir: ";
			cin>>km;
			mi = km * 0.621371;
			cout<<km<<" Kilometros equivalen a "<<mi<<" millas"<<endl;
		break;
		case 2:
			system("cls");
			cout<<"----- millas a Kilometros-----"<<endl;
			cout<<"Ingrese la cantidad de millas a convertir: ";
			cin>>mi;
			km = mi * 1.60934;
			cout<<mi<<" millas equivalen a "<<km<<" kilometros. "<<endl;
		break;
		case 3:
			system("cls");
			cout<<"----- metros a pulgadas -----"<<endl;
			cout<<"Ingrese la cantidad de metros a convertir: ";
			cin>>m;
			pulg = m * 39.3701;
			cout<<m<<" metros equivale a "<<pulg<<" pulgadas. "<<endl;
		break;
		case 4:
			system("cls");
			cout<<"----- pulgadas a metros -----"<<endl;
			cout<<"Ingrese la cantidad de pulgadas a convertir: ";
			cin>>pulg;
			m = pulg * 0.0254;
			cout<<pulg<<" pulgadas equivale a "<<m<<" metros. "<<endl;
		break;
		case 5:
			system("cls");
			cout<<"----- libras a kilos -----"<<endl;
			cout<<"Ingrese la cantidad de libras a convertir: ";
			cin>>lb;
			kg = lb * 0.453592;
			cout<<lb<<" libras equivale a "<<kg<<" kilogramos. "<<endl;
		break;
		case 6:
			system("cls");
			cout<<"----- kilos a libras -----"<<endl;
			cout<<"Ingrese la cantidad de kilos a convertir: ";
			cin>>kg;
			lb = kg * 2.20462;
			cout<<kg<<" kilos equivale a "<<lb<<" libras. "<<endl;
		break;
		default:
			system("cls");
			cout<<" La opcion ingresada no es correcta "<<endl;
			break;
	}
}

void getOpcion4(){
	string texto;
    int aux = 0, igual = 0;
    
    cout << "Ingrese la palabra o numero a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        cout << "La palabra o numero ingresada es palindromo!! :D" << endl;
    } else {
        cout << "La palabra o numero ingresada no es palindromo!! D:" << endl;
    }
}

void getOpcion5(){
	int num, a;
cout << "Transformacion de numero arabigos a romanos" << endl;
cout << "Escribe el numero a convertir, que sea mayor o igual a 1 y menor o igual a 3999" << endl;
cin >> a;
num=a;
while(num!=0)
{

if (num<= 3999 && num>= 1000)
{
cout << "M";
num = num -1000;
}
else if(num <1000 && num>=900)
{
cout << "CM";
num = num - 900;
}
else if(num < 900 && num>500)
{
cout << "D";
num = num - 500;
}
else if (num == 500)
{
cout << "D";
num = num -500;
}
else if (num<500 && num>= 400)
{
cout << "CD";
num = num - 400;
}
else if (num<400 && num >99)
{
cout << "C";
num = num -100;
}
else if (num< 100 && num>89)
{
cout << "XC";
num = num - 90;
}
else if (num< 90 && num>59)
{
cout << "L";
num = num - 50;
}
else if(num<60 && num >50)
{
cout << "L";
num = num - 50;
}
else if (num ==50)
{
cout << "L";
num = num -50;
}
else if(num<50 && num>39)
{
cout << "XL";
num = num - 40;
}
else if(num< 40 && num> 10)
{
cout << "X";
num = num - 10;
}
else if(num == 10)
{
cout << "X";
num = num -10;
}
else if(num==9)
{
cout << "IX";
num = num - 9;
}
else if(num<=8 && num>=6)
{
cout << "V";
num = num - 5;
}
else if (num == 5)
{
cout << "V";
num = num - 5;
}
else if (num == 4)
{
cout << "IV";
num = num - 4;
}
else if (num<= 3 && num>=1)
{
cout << "I";
num = num - 1;
}
}
cout << endl << "LISTO!!!" << endl;
}

void getOpcion6(){
	int x;
	cout<<"ingrese un numero"<<endl;
	cin>>x;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else

	{
		if(x>=900)	{cout<<"NOVECIENTOS "	;x=x-900;}
   	   else if(x>=800)	{cout<<"OCHOCIENTOS "	;x=x-800;}
	   else if(x>=700)	{cout<<"SETECIENTOS "	;x=x-700;}
	   else if(x>=600)	{cout<<"SEISCIENTOS "	;x=x-600;}
	   else if(x>=500)	{cout<<"QUINIENTOS "	;x=x-500;}
	   else if(x>=400)	{cout<<"CUATROCIENTOS "	;x=x-400;}
	   else if(x>=300)	{cout<<"TRESCIENTOS "	;x=x-300;}
	   else if(x>=200)	{cout<<"DOSCIENTOS "	;x=x-200;}
	   else if(x>100)	{cout<<"CIENTO "	;x=x-100;}
	   else if(x==100)	{cout<<"CIEN"		;x=x-100;}
		if(x>90)	{cout<<"NOVENTA Y "	;x=x-90; }
	    	if(x==90)	{cout<<"NOVENTA"	;x=x-90; }  
	    	if(x>80)	{cout<<"OCHENTA Y "	;x=x-80; }
	    	if(x==80)	{cout<<"OCHENTA"	;x=x-80; }
	    	if(x>70)	{cout<<"SETENTA Y "	;x=x-70; }
	    	if(x==70)	{cout<<"SETENTA"	;x=x-70; }
	    	if(x>60)	{cout<<"SESENTA Y "	;x=x-60; }
	    	if(x==60)	{cout<<"SESENTA"	;x=x-60; }
	    	if(x>50)	{cout<<"CINCUENTA Y "	;x=x-50; }
	    	if(x==50)	{cout<<"CINCUENTA"	;x=x-50; }
	    	if(x>40)	{cout<<"CUARENTA Y "	;x=x-40; }
	    	if(x==40)	{cout<<"CUARENTA"	;x=x-40; }
	    	if(x>30)	{cout<<"TREINTA Y "	;x=x-30; }
	    	if(x==30)	{cout<<"TREINTA"	;x=x-30; }
	    	if(x>20)	{cout<<"VEINTI"		;x=x-20; }
	    	if(x==20)	{cout<<"VEINTE"		;x=x-20; }
		if(x>=16)	{cout<<"DIECI"		;x=x-10; }
	   else if(x==15)	{cout<<"QUINCE"		;x=x-15; }
	   else if(x==14)	{cout<<"CATORCE"	;x=x-14; }
	   else if(x==13)	{cout<<"TRECE"		;x=x-13; } 
	   else if(x==12)	{cout<<"DOCE"		;x=x-12; }
	   else if(x==11)	{cout<<"ONCE"		;x=x-11; }
	   else if(x==10)	{cout<<"DIEZ"		;x=x-10; }		
		if(x==9)	{cout<<"NUEVE"		;x=x-9;  }
		if(x==8)	{cout<<"OCHO"		;x=x-8;  }
		if(x==7)	{cout<<"SIETE"		;x=x-7;  }
	    	if(x==6)	{cout<<"SEIS"		;x=x-6;  }
	   else if(x==5)	{cout<<"CINCO"		;x=x-5;  }
	   else if(x==4)	{cout<<"CUATRO"		;x=x-4;	 }
	   else if(x==3)	{cout<<"TRES"		;x=x-3;	 }
	   else if(x==2)	{cout<<"DOS"		;x=x-2;	 }
	   else if(x==1)	{cout<<"UNO"		;x=x-1;	 }
	   }
    cout<<endl;
    cin.ignore();
}

void getOpcion7(){
	int x;
	int d;
	cout<<"ingrese el numero entero"<<endl;
	cin>>x;
	cout<<"Ingrese la parte con decimal"<<endl;
	cin>>d;
	
	cout<<x<<"."<<d<<endl;
	
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else

	{
		if(x>=900)	{cout<<"NOVECIENTOS "	;x=x-900;}
   	   else if(x>=800)	{cout<<"OCHOCIENTOS "	;x=x-800;}
	   else if(x>=700)	{cout<<"SETECIENTOS "	;x=x-700;}
	   else if(x>=600)	{cout<<"SEISCIENTOS "	;x=x-600;}
	   else if(x>=500)	{cout<<"QUINIENTOS "	;x=x-500;}
	   else if(x>=400)	{cout<<"CUATROCIENTOS "	;x=x-400;}
	   else if(x>=300)	{cout<<"TRESCIENTOS "	;x=x-300;}
	   else if(x>=200)	{cout<<"DOSCIENTOS "	;x=x-200;}
	   else if(x>100)	{cout<<"CIENTO "	;x=x-100;}
	   else if(x==100)	{cout<<"CIEN"		;x=x-100;}
		if(x>90)	{cout<<"NOVENTA Y "	;x=x-90; }
	    	if(x==90)	{cout<<"NOVENTA"	;x=x-90; }  
	    	if(x>80)	{cout<<"OCHENTA Y "	;x=x-80; }
	    	if(x==80)	{cout<<"OCHENTA"	;x=x-80; }
	    	if(x>70)	{cout<<"SETENTA Y "	;x=x-70; }
	    	if(x==70)	{cout<<"SETENTA"	;x=x-70; }
	    	if(x>60)	{cout<<"SESENTA Y "	;x=x-60; }
	    	if(x==60)	{cout<<"SESENTA"	;x=x-60; }
	    	if(x>50)	{cout<<"CINCUENTA Y "	;x=x-50; }
	    	if(x==50)	{cout<<"CINCUENTA"	;x=x-50; }
	    	if(x>40)	{cout<<"CUARENTA Y "	;x=x-40; }
	    	if(x==40)	{cout<<"CUARENTA"	;x=x-40; }
	    	if(x>30)	{cout<<"TREINTA Y "	;x=x-30; }
	    	if(x==30)	{cout<<"TREINTA"	;x=x-30; }
	    	if(x>20)	{cout<<"VEINTI"		;x=x-20; }
	    	if(x==20)	{cout<<"VEINTE"		;x=x-20; }
		if(x>=16)	{cout<<"DIECI"		;x=x-10; }
	   else if(x==15)	{cout<<"QUINCE"		;x=x-15; }
	   else if(x==14)	{cout<<"CATORCE"	;x=x-14; }
	   else if(x==13)	{cout<<"TRECE"		;x=x-13; } 
	   else if(x==12)	{cout<<"DOCE"		;x=x-12; }
	   else if(x==11)	{cout<<"ONCE"		;x=x-11; }
	   else if(x==10)	{cout<<"DIEZ"		;x=x-10; }		
		if(x==9)	{cout<<"NUEVE"		;x=x-9;  }
		if(x==8)	{cout<<"OCHO"		;x=x-8;  }
		if(x==7)	{cout<<"SIETE"		;x=x-7;  }
	    	if(x==6)	{cout<<"SEIS"		;x=x-6;  }
	   else if(x==5)	{cout<<"CINCO"		;x=x-5;  }
	   else if(x==4)	{cout<<"CUATRO"		;x=x-4;	 }
	   else if(x==3)	{cout<<"TRES"		;x=x-3;	 }
	   else if(x==2)	{cout<<"DOS"		;x=x-2;	 }
	   else if(x==1)	{cout<<"UNO"		;x=x-1;	 }
	   }
	if((d<1)||(d>99)) cout<<"INGRESA UN NUMERO DEL 1 AL 99\n";
else{
			if(d>90)	{cout<<" PUNTO NOVENTA Y "	;d=d-90; }
	    	if(d==90)	{cout<<" PUNTO NOVENTA"	;d=d-90; }  
	    	if(d>80)	{cout<<" PUNTO OCHENTA Y "	;d=d-80; }
	    	if(d==80)	{cout<<" PUNTO OCHENTA"	;d=d-80; }
	    	if(d>70)	{cout<<" PUNTO SETENTA Y "	;d=d-70; }
	    	if(d==70)	{cout<<" PUNTO SETENTA"	;d=d-70; }
	    	if(d>60)	{cout<<" PUNTO SESENTA Y "	;d=d-60; }
	    	if(d==60)	{cout<<" PUNTO SESENTA"	;d=d-60; }
	    	if(d>50)	{cout<<" PUNTO CINCUENTA Y "	;d=d-50; }
	    	if(d==50)	{cout<<" PUNTO CINCUENTA"	;d=d-50; }
	    	if(d>40)	{cout<<" PUNTO CUARENTA Y "	;x=x-40; }
	    	if(d==40)	{cout<<" PUNTO CUARENTA"	;d=d-40; }
	    	if(d>30)	{cout<<" PUNTO TREINTA Y "	;d=d-30; }
	    	if(d==30)	{cout<<" PUNTO TREINTA"	;d=d-30; }
	    	if(d>20)	{cout<<" PUNTO VEINTI"		;d=d-20; }
	    	if(d==20)	{cout<<" PUNTO VEINTE"		;d=d-20; }
		if(d>=16)	{cout<<" PUNTO DIECI"		;d=d-10; }
	   else if(d==15)	{cout<<" PUNTO QUINCE"		;d=d-15; }
	   else if(d==14)	{cout<<" PUNTO CATORCE"	;d=d-14; }
	   else if(d==13)	{cout<<" PUNTO TRECE"		;d=d-13; } 
	   else if(d==12)	{cout<<" PUNTO DOCE"		;d=d-12; }
	   else if(d==11)	{cout<<" PUNTO ONCE"		;d=d-11; }
	   else if(d==10)	{cout<<" PUNTO DIEZ"		;d=d-10; }		
		if(d==9)	{cout<<"NUEVE"		;d=d-9;  }
		if(d==8)	{cout<<"OCHO"		;d=d-8;  }
		if(d==7)	{cout<<"SIETE"		;d=d-7;  }
	    	if(d==6)	{cout<<"SEIS"		;d=d-6;  }
	   else if(d==5)	{cout<<"CINCO"		;d=d-5;  }
	   else if(d==4)	{cout<<"CUATRO"		;d=d-4;	 }
	   else if(d==3)	{cout<<"TRES"		;d=d-3;	 }
	   else if(d==2)	{cout<<"DOS"		;d=d-2;	 }
	   else if(d==1)	{cout<<"UNO"		;d=d-1;	 }
}
    cout<<endl;
    cin.ignore();
}

void getOpcion8(){
	int numero;
    cout<<"Ingrese el numero del cual desea obtener la tabla de multiplicar :"<<endl;
    cin>>numero;
    
    for(int i=1;i<=10;i++){
        int multiplicacion = i * numero;
        cout<<numero <<" x "<< i <<"="<< multiplicacion <<endl;
    }
}

void getOpcion9(){
	int izquierda=1;
	int derecha=1;
	int resultado;
	
	cout<< " Todas las tablas de multiplicar del 1 al 10 "<<endl;
	
	while(izquierda <= 10){
		resultado = izquierda * derecha;
	cout<< izquierda << "x" << derecha << "=" << resultado << endl;
	derecha++;
	
	if (derecha==11){
		derecha =1;
		izquierda++;
		cout << endl;
	}
		
	}
}

void getOpcion10(){
	int num1, num2, result;
	
	cout<<"Ingresa el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	
	result = num1 * num2;
	
	cout<<"   "<<num1<<endl;
	cout<<" x "<<num2<<endl;
	cout<<"  -----"<<endl;
	cout<<"   "<<result<<endl;
	
}

void getOpcion11(){
	int numero;
	string binario ="";
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	if (numero >0){
		while (numero>0){
			if (numero%2 == 0){
				binario = "0"+binario;
			} else {
			binario = "1"+binario;
		}
		
		numero = (int) numero/2;	
		} 
	
	} else if (numero == 0){
		binario = "0";
	} else {
		binario = "no se puede realizar la conversion.";
	}
	cout<<"El resultado de la conversion es: "<< binario << endl;
}

void getOpcion12(){
	int digitoex[20];
	int decimal, residuo, resultado, i = 0;
	
	cout<<"Introduce el numero decimal a convertir: ";
	cin>> decimal;
	
	do{
		residuo = decimal % 16;
		resultado = decimal / 16;
		digitoex[i] = residuo;
		decimal = resultado;
		i++;
	} while (resultado > 15);
	
	digitoex[i] = resultado;
	
	cout<<"El equivalente en hexadecimal es: ";
	
	for (int j = i; j >=0; j--){
		if (digitoex[j] == 10){
			cout << "A";
		}
		else if (digitoex[j] == 11){
			cout << "B";
		}
		else if (digitoex[j] == 12){
			cout << "C";
		}
		else if (digitoex[j] == 13){
			cout << "D";
		}
		else if (digitoex[j] == 14){
			cout << "E";
		}
		else if (digitoex[j] == 15){
			cout << "F";
		}
		else{
			cout << digitoex[j];
		}
	}
	cout << endl;
}

void getOpcion13(){
	int opci, anchura, altura;
	short lado;
	
	cout<< "Que figura desea dibujar"<<endl;
	cout<< "1. Cuadrado"<<endl;
	cout<< "2. Triangulo"<<endl;
	cout<< "3. Circulo"<<endl;
	cout<< "4. Rectangulo"<<endl;
	cin >> opci;
	
	switch (opci){
		case 1:
		cout << "Ingrese un numero: "; cin>>lado;
	for (short i=0; i < lado; i++){
		for (short j = 0; j < lado; j++){
			if (i == 0 || j == 0 || i == lado - 1 || j == lado - 1 || i == (lado / 2) || j == (lado / 2)){
				cout <<"*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	break;
	    case 2:
	    	
	
	cout << "Ingrese un numero "; cin>>lado;
	for (short i=1; i<=lado; i++){
		for (short j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
    break;
    case 3:
    	
    	cout<<"Ingrese un numero "; 
    	cin>>lado;
    	for (short j=0; j <= lado; j++){
    		for (short i=0; i <= lado; i++){
    			if(sqrt(pow(j-(lado/2),2)+pow(i-(lado/2),2))<=lado/2){
    				cout<<"*";
				}else{
					cout<<"";
				}
}
cout<<endl;
}
    break;
    case 4:
    	cout<<"ingresa el ancho del rectangulo (como minimo 2): ";
    	cin>>anchura;
    	cout<<"ingresa la altura del rectangulo (como minimo 2): ";
    	cin>>altura;
    	
    	if((anchura < 2) || (altura < 2)){
    		cout<<"Error, datos incorrectos"<<endl;
		} else {
			for(int i = 1; i< anchura; i++){
				cout<<"*";
			}
			for (int i = 2; i < altura; i++){
				cout<<"\n";
				for(int espacios = 2; espacios < anchura; espacios++){
					cout<<" ";
				}
				cout<<"*";
			}
			cout<<""<<endl;
			for(int i = 1; i <= anchura; i++){
				cout<<"*";
			}
		}
    	cout<<endl;
    break;
    default:
    	cout<<"No eligio ningun opcion del listado"<<endl;
}
}

void getOpcion14(){


while(opcion!='z'){
		system("cls");
		gotoxy(x,y); cout<<"*";
		opcion=getch();
		switch(opcion){
			case 'w': y--; break;
			case 's': y++; break;
			case 'a': x--; break;
			case 'd': x++; break;
			default: cout<<" Gracias por usar el puntero :D"<<endl;
			break;
		}
	}

}

void getOpcion15(){
	int saldo_inicial= 1000, opc;
	float extra,saldo = 0, retiro;
	
	cout<<"Bienvenido a su Cajero Virtual"<<endl;
	cout<<"1. Ver su saldo actual"<<endl;
	cout<<"2. Ingresar dinero en la cuenta"<<endl;
	cout<<"3. Retirar dinero de la cuenta"<<endl;
	cout<<"4. salir"<<endl;
	cout<<"Elija una opcion"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Su saldo por defecto es de :"<<saldo_inicial<<endl;
		break;
		case 2:
			cout<<"Digite la cantidad de dinero a ingresar: ";
			cin>>extra;
			saldo = saldo_inicial + extra;
			cout<<"Dinero en cuenta: "<<saldo<<endl; break;
		
		case 3:
			cout<<"Digite la cantidad de dinero que va a retirar: ";
			cin>>retiro;
			
			if(retiro > saldo_inicial){
				cout<<"NO tiene esa cantidad de dinero";
			}
			else{
				saldo = saldo_inicial-retiro;
				cout<<"Dinero en Cuenta: "<<saldo<<endl;
			}
			break;
		case 4: break;
	}
}

void getOpcion16(){
	int co,ca;
	float h;
	
	cout<<"Digite Cateto Opuesto: ";
	cin>>co;
	
	cout<<"Digite Cateto Adyacente: ";
	cin>>ca;
	
	h= sqrt (pow(co,2)+pow(ca,2));
	
	cout<<"La hipotenusa es de: "<<h<<endl;
	
	cin.get();
}

