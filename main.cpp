#include <iostream>
#include<string>
#include<stdlib.h>
#include<string.h>
#include"fecha.h"
#include"funciones.h"
using namespace std;

int main()

{
    //HOLA MUNDO SOY JUAN CRUZ
    int a,b,c;
      FechaUno f1,f2(13,8,1989),f4(15,8,2021),f3("14/8/2020");
cout<<"LA FECHA DEL SISTEMA ACTUAL ES: "<<endl;
   f1.Mostrar();
   cout<<"0 DOMINGO A ,6 SABADO"<<endl;
   cout<<f1.NumeroDeDia()<<endl;
   cout<<"NUMERO DE DIA DEL ANIO"<<endl;
   cout<<f1.DiaDelAnio()<<endl;
   cout<<"NUMERO DE SEMANA"<<endl;
   cout<<f1.NumeroDeSemana()<<endl;

cout<<"LA FECHA DEL  ASIGNADA ES: "<<endl;
   f2.Mostrar();
   cout<<"0 DOMINGO A ,6 SABADO"<<endl;
   cout<<f2.NumeroDeDia()<<endl;
   cout<<"NUMERO DE DIA DEL ANIO"<<endl;
   cout<<f2.DiaDelAnio()<<endl;
   cout<<"NUMERO DE SEMANA"<<endl;
   cout<<f2.NumeroDeSemana()<<endl;
cout<<"LA FECHA DEL ESCRITA ES: "<<endl;
   f3.Mostrar();

   cout<<f3.NumeroDeDia()<<endl;
a=CalcularEdad(f2,f4);
cout<<"COMPARA DOS EDADES : ";
cout<<a;
cout<<endl;
b=CalcularEdad1(f2);
cout<<"COMPARA DOS EDADES : ";
cout<<b;
c=Comparar(f2,f4);
cout<<"COMPARA DOS FECHAS : ";
cout<<c;






    return 0;
}





/*obj.SetDia(2);
obj.SetMes(10);
obj.SetAnio(1990);
obj.Mostrar();*/
/*int dia;
    cout << "LA FECHA ACTUAL DEL SISTEMA ES " << endl;
    nuevo.Mostrar();
    cout<<endl;
    obj.Cargar();
    cout<<endl;*/


    /*

    cout<<endl;
    cout<<"FECHA GUARDADA"<<endl;



    cout<<"ingresa un aios";
cin>>a;
if(a<2000 || a>1900){
    r=(a%4);an=(a-1)/4;} else{r=((a%4)%400);an=((a-1)/4);}



    di=31+28+31+27;
    re=a+di+an;
cout<<endl;
cout<<endl;

restoo=(re%7);
cout<<restoo;

cout<<endl;


 cout<<"el dia que naciste es";



switch(restoo)
{
case  2: cout<<"DOMINGO"<<endl;
break;
case  3: cout<<"LUNES"<<endl;
break;
case  4:cout<<"MARTES"<<endl;
break;
case 5:cout<<"MIERCOLES"<<endl;
break;
case 6 :cout<<"JUEVES"<<endl;
break;
case 0 : cout<<"VIERNES"<<endl;
break;
case 1: cout<<"SABADO"<<endl;
break;





}
*/
