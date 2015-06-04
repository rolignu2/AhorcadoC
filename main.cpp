

/* jueguito */

#include<iostream>
#include<conio.h>
#include<conio.c>
#include<time.h>
#include<windows.h>
#include<string.h>
#include<stdio.h>

namespace AHORCADO_CL
{
   #define C_NEGRO_R system("COLOR 0C");
   #define C_NEGRO_AM system("COLOR 0E");
   #define C_NEGRO_AZ system("COLOR 09");
   #define BORRAR system("cls");
          }

int iniciar_juego(char* nombre ,int n);
char* frase(char cadenax[]);
int cabeza(void);
int brazo_iz(void);
int brazo_de(void);
int pierna_iz(void);
int pierna_de(void);
void nombre(int xy);
int cuerpo(void);
int horca(void);
void construir(void);

using namespace std;
using namespace AHORCADO_CL;

int iniciar_juego(char* nombre ,int n)
{
    int i = 0;
    int j = 0;
    int h = 0;
    int x = 0;
    int y =0;
    int w = 0;
    int can_letra=0 , n2 = n;
    char letra;
    char residuo[50];
    //
      BORRAR;
      for(i=8;i>0;i--)
      {
      if(i<8)
      {
        if(i>=7 && i<8){cabeza();}
        if(i==6){cuerpo(); cabeza(); }
        if(i==5){brazo_iz();cuerpo(); cabeza();}
        if(i==4){brazo_de();brazo_iz();cuerpo(); cabeza();}
        if(i==3){pierna_iz();brazo_de();brazo_iz();cuerpo(); cabeza();}
        if(i==2){pierna_de();pierna_iz();brazo_de();brazo_iz();cuerpo(); cabeza();}
        if(i==1){construir();getch();break;}
         }  
      // 
      cout<<"\n";
      x=0;
      y=0;
      h=0;
       for(y;y<n;y++)
      {
        if(residuo[y]==nombre[y])
        {
         cout<<" "<<residuo[y];
         }
         else{cout<<"_"<<" ";}
        //
    
      }
      cout<<"\n\n";
      cout<<"\nNumero de Intentos "<<i-1;
      cout<<"\nDigite la letra ";  
      cin>>letra; 
      for(h;h<n;h++)
    {
      BORRAR;
      if(letra==nombre[h])
      {
        x++;
        if(x==1){i++;}
        can_letra ++;
        residuo[h]=letra;
        }
    }
    if(can_letra == n2)
    {
      cout<<"\nFelicidades encontro la frase que es ";
      for(w;w<n;w++){cout<<nombre[w];}
      getch();
      break;
      }
}
return 0;
}


//inicio impresion muñeco---------------------------------------
int cabeza(void)
{
    C_NEGRO_AM ;
    gotoxy(60,6);
    cout<<"|||||";
    gotoxy(59,7);
    cout<<"| . . |";
    gotoxy(60,8);
    cout<<"|_-_|";
    return 0;
}

int cuerpo(void)
{
    C_NEGRO_AZ
    gotoxy(62,9);
	cout<<"|";
	gotoxy(62,10;
	cout<<"|";
	gotoxy(62,11;
	cout<<"|";
	gotoxy(62,12;
	cout<<"|";
	return 0;
}

int brazo_iz(void)
{
    C_NEGRO_AM
    gotoxy(62,9);
	cout<<"\\";
	gotoxy(64,10;
	cout<<"\\";
    return 0;
}

int brazo_de(void)
{
    C_NEGRO_AZ
    gotoxy(62,9);
	cout<<"/";
	gotoxy(60,10);
	cout<<"/";
    return 0;
}

int pierna_iz(void)
{
    C_NEGRO_AM
    gotoxy(62,13);
	cout<<"\\";
	gotoxy(64,14);
	cout<<"\\";
    return 0;
}

int pierna_de(void)
{
    C_NEGRO_AZ
    gotoxy(62,13);
	cout<<"/";
	gotoxy(60,14);
	cout<<"/";
    return 0;
}


int horca(void)
{
    C_NEGRO_AM
	int i;
	gotoxy(62,5);
	cout<<":";
	gotoxy(62,4);
	cout<<":";
	gotoxy(62,3;
	cout<<":";
	gotoxy(62,3);
	cout<<":::::::::::::::";
	for(i=3;i<18;i++)
		{
			gotoxy(77,i);
			cout<<":";
		}
	gotoxy(62,i);
	cout<<"===============";
	return 0;
}

//final impresion muñeco---------------------------------------


int main ()
{
/* variables iniciales*/
    char cadena[50];
    int numero = 0;
    int x_menu = 0;
    int y = 0;
    int i = 0 , j =0;
/* variables final */
//namespace ahorcado_cl **color
Inicio:
C_NEGRO_R;
//
//inicio  rolisoft
cout<<"\t\t\tROLI__ AHORCADO 2.0 RC  ";
cout<<"\n\n";
cout<<"Seleccione una opcion ";
cout<<"\n\n1->Iniciar juego";
cout<<"\n2->Insertar Frase";
cout<<"\n3->Acerca De";
cout<<"\n4->Salir del juego";
cout<<"\n\t\t\tNumero: ";
//
//inicio del algoritmo del menu 
cin>>x_menu;
if(x_menu>=5)
{
   BORRAR;         
   cout<<"\nError numero invalido digitar otro numero 1-2-3-4\n\n";
   goto Inicio;
}
switch(x_menu)
{
       case 1:
            if(numero==0)
            {
              BORRAR;           
              cout<<"No ha digitado la frase\n\n";
              goto Inicio;
              }
            else
            {
            iniciar_juego(cadena,numero);
            }
            BORRAR;
            goto Inicio;
            break;   
       case 2:
             BORRAR;
             cout<<"\n\nESCRIBA LA PALABRA OCULTA ";
             cin>>cadena;
             numero = strlen(cadena);
             if(numero!=0)
             {
             BORRAR;
             cout<<"FRASE AGREGADA EXITOSAMENTE PULSAR 1 PARA JUGAR\n\n";
             }
             goto Inicio;
             break;
       case 3:
             nombre(0);
             goto Inicio;
             break;
       case 4:
             nombre(1);
             return 0;
             break;
               
              }
getch();
return 0;
}

void nombre(int xy)
{
// si xy = 1 entonces saldra inmediatamente del ciclo en caso de que xy sea sero continuara el ciclo
//si xy es > 1 entonces es un conteo  
int l =0;
int i =0;
int salir = 0;
//
BORRAR;
while((l<=0) && (salir == 0))
{
cout<<"\n/**////**   **/////** /**      /**";
Sleep(500);
C_NEGRO_AZ;
cout<<"\n/**   /**  **     //**/**      /**";
Sleep(450);
C_NEGRO_R;
cout<<"\n/*******  /**      /**/**      /**";
Sleep(400);
C_NEGRO_AM;
cout<<"\n/**///**  /**      /**/**      /**";
Sleep(350);
C_NEGRO_AZ;
cout<<"\n/**  //** //**     ** /**      /**";
Sleep(300);
C_NEGRO_AZ;
cout<<"\n/**   //** //*******  /********/**";
Sleep(500);
C_NEGRO_AM;
cout<<"\n//     //   ///////   //////// // ";
Sleep(900);
C_NEGRO_R;
//
BORRAR;
if(xy ==1){l=xy;}
if(xy==0){};
if(kbhit())
{
   salir = 1;
}   
//
}
if(xy!=1){getch();}
}


void construir(void)
{
cabeza();
brazo_iz();
brazo_de();
pierna_iz();
pierna_de();
cuerpo();
horca();
cout<<"\t\t PERDISTES JAJAJAJAJAAJAJ;
cout<<"\n\n\t\tPULSAR UNA TECLA... CHUCK NORRIS LIVE";
}






