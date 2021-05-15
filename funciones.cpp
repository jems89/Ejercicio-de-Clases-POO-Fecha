#include <iostream>
#include<string>
#include<stdlib.h>
#include<string.h>
#include"funciones.h"
#include <ctime>

using namespace std;

/*Hacer una función llamada calcularEdad que reciba dos objetos de tipo fecha.
 El primero representando la fecha de nacimiento de una persona y el segundo una fecha posterior. Calcular y devolver la edad de la persona.
*/
int CalcularEdad(FechaUno nacimiento,FechaUno posterior ){

int Edad=0;


 if (nacimiento.GetMes()<=posterior.GetMes()){

        Edad=posterior.GetAnio()-nacimiento.GetAnio();

 if (nacimiento.GetDia()<=posterior.GetDia()) {

        Edad=posterior.GetAnio()-nacimiento.GetAnio();}

 else{Edad=posterior.GetAnio()-nacimiento.GetAnio()-1;}



  }


 else{Edad=posterior.GetAnio()-nacimiento.GetAnio()-1;};



return Edad;
};

/*Hacer una función llamada calcularEdad
que reciba un objeto de tipo fecha que represente la fecha de nacimiento de una persona.
 Calcular y devolver la edad utilizando como fecha de referencia la actual.*/

 int CalcularEdad1(FechaUno nacimiento ){

int Edad=0;
FechaUno f1;

 if (nacimiento.GetMes()<=f1.GetMes()){

        Edad=f1.GetAnio()-nacimiento.GetAnio();

 if (nacimiento.GetDia()<=f1.GetDia()) {

        Edad=f1.GetAnio()-nacimiento.GetAnio();}

 else{Edad=f1.GetAnio()-nacimiento.GetAnio()-1;}



  }


 else{Edad=f1.GetAnio()-nacimiento.GetAnio()-1;};



return Edad;
};

/*
Hacer una función llamada compararFechas que reciba dos fechas y devuelva:
 0 si son iguales.
-1 si la primer fecha es menor a la segunda.
 1 si la primer fecha es mayor a la segunda.
*/

 int Comparar (FechaUno fecha1,FechaUno fecha2 ){

int a=0;



       /* if(fecha1.GetAnio()- fecha2.GetAnio()==0 && fecha1.GetDia()-fecha2.GetDia()==0 && fecha1.GetMes()-fecha2.GetMes()==0  )
            {

            a=0;


            }
            else{ if (fecha1.GetAnio()< fecha2.GetAnio() && fecha1.GetDia()<fecha2.GetDia() && fecha1.GetMes()<fecha2.GetMes() )

                {a=1;}



                else{ a=-1;  }


            }

            return a;*/

       /* if () {}

        if () {}*/





  };


