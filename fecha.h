#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED


class FechaUno{
 private:
    int dia,mes,anio;

    public:

    char cadena[12];
    bool cd=false;

      FechaUno();
      FechaUno(int, int ,int);
      FechaUno(const char*);
     int GetDia();
     int GetMes();
     int GetAnio();
     void SetDia(int);
     void SetAnio(int);
     void SetMes(int);
     void Mostrar();
     void Cargar();
     int NumeroDeDia();
     int NumeroDeSemana();

     int DiaDelAnio();

};


#endif // FECHA_H_INCLUDED
