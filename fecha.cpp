#include <iostream>
#include<string>
#include<stdlib.h>
#include<string.h>
#include"fecha.h"
#include <ctime>



using namespace std;
/*realizar una clase denominada Fecha que permita representar una fecha válida cualquiera (día, mes y año).
 La misma sólo debe admitir fechas válidas, es decir, que se puedan encontrar en el calendario.
 En caso de establecer una fecha no válida la misma debe registrar 0/0/0.
La clase debe permitir asignar y devolver los siguiente atributos: día, mes y año.
*/

FechaUno::FechaUno(	){
time_t t=time (NULL);struct tm tm =*localtime(&t);
dia=tm. tm_mday;
mes=tm.tm_mon+1;
anio=tm.tm_year+1900;}

FechaUno::FechaUno(int d ,int m, int a){
if (d<0 || d>31 || m<0 || m>12 || a<0){dia=0; mes=0; anio=0;}
            else{dia=d; mes=m; anio=a;}
}
FechaUno::FechaUno(const char *c){


    strcpy(cadena,c);
   dia =atoi(c);
    mes =atoi(c);
    anio =atoi(c);


    cd=true;}

////////////////////////////////////////////////
void FechaUno::SetDia(int d )
{ if(d>0 && d<32) {dia=d;} else dia=0;}
//////////////////////////////////////////////

void FechaUno::SetMes(int m)
{if(m>0&&m<13) {mes=m;} else mes=0;  }
/////////////////////////////////////////////

void FechaUno::SetAnio(int a)
{if(a>1900&&a<2021) {anio=a;} else anio=0;}


////////////////////////////////////////
int FechaUno::GetDia(){return dia;}
///////////////////////////////////////
int FechaUno::GetMes(){return mes;}
//////////////////////////////////////
int FechaUno::GetAnio(){return anio;}



/*void FechaUno::Cargar()
{
int d,m,a;
cout<<"INGRESE UN DIA"<<endl;
cin>>d;
if(d>0 && d<32) {dia=d;} else {dia=0;cout<<"ERROR"<<endl;}
cout<<"INGRESE UN MES "<<endl;
cin>>m;
if(m>0 && m<13) {mes=m;} else {mes=0;cout<<"ERROR"<<endl;}
cout<<"INGRESE UN ANIO"<<endl;
cin>>a;
if(a>0 && a<2021) {anio=a;} else {anio=0;cout<<"ERROR"<<endl;}

}*/

void FechaUno::Mostrar( )
{
    if(cd==false){
cout<<"_____________________"<<endl;
if (dia<10){cout << "0" << dia;}
        else{cout << dia;}

cout<<"/";
if (mes<10){cout << "0" << mes;}
        else{cout << mes;}
cout<<"/"<<anio<<endl;
cout<<"_____________________"<<endl;}else
{
cout<<"_____________________"<<endl;

cout<<cadena<<endl;
cout<<"_____________________"<<endl;}

}

int FechaUno::NumeroDeDia()

/*Elaborar un método que devuelva el número de día de la semana (0 - Domingo y 6 - Sábado)
 a partir de la fecha registrada en el objeto.
*/
{   const int MesComun   [12]={0,3,3,6,1,4,6,2,5,0,3,5};
    const int MesBisiesto[12]={0,3,4,0,2,5,0,3,6,1,4,6};
int NumeroDiaa,a,b,c,d;

if(anio%4!=0){
a=(anio-1)%7;
b=((anio-1)/4 - (3*((anio-1)/100+1)/4))%7;
c=MesComun[mes-1];
d=dia%7;

NumeroDiaa=(a+b+c+d)%7;}

else {
a=(anio-1)%7;
b=((anio-1)/4 - (3*((anio-1)/100+1)/4))%7;
c=MesBisiesto[mes-1];
d=dia%7;

NumeroDiaa=(a+b+c+d)%7;}

return NumeroDiaa;

}

/*Elaborar un método que devuelva el número de día del año (1 a 366)
     a partir de la fecha registrada en el objeto. Por ejemplo, si la fecha registrada es 1/1/2021. Debe devolver 1.
*/
int FechaUno::DiaDelAnio()

{
    int i,resultado,acum=0;
const int M   [12]={31,28,31,30,31,30,31,31,30,31,30,31};
const int MB  [12]={31,29,31,30,31,30,31,31,30,31,30,31};


if(anio%4!=0){

for(i=0;i<mes-1;i++)
    {
    acum+=M[i];

    }
}else{
    for(i=0;i<mes-1;i++)
    {
    acum+=MB[i];

    }}
resultado=dia+acum;


return resultado;

}
/*Elaborar un método que devuelva el número de semana a partir de la fecha registrada en el objeto.*/

int FechaUno::NumeroDeSemana()
{
/*const int M   [12]={31,28,31,30,31,30,31,31,30,31,30,31};
const int MB[12]={31,29,31,30,31,30,31,31,30,31,30,31};

int a,i,resultado,acum=0;
if(anio%4==0){

for(i=0;i<mes-1;i++)
    {
    acum+=M[i];

    }}else {

    for(i=0;i<mes-1;i++)
    {
    acum+=MB[i];

    }


    }
resultado=dia+acum;
a=resultado/7;
return a;*/

    int semana=0, primer_dia=0;
    primer_dia=(((anio-1)+(anio-1)/4-(anio-1)/100+(anio-1)/400+1)%7); //Primer día del año
    semana=(DiaDelAnio()+(6-primer_dia)+(6-NumeroDeDia()))/7;          //Calculo de semana en base al primer dia y dia ingresado
    return semana;

}

