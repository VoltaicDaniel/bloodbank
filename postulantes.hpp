#ifndef __postulantes_hpp_
#define __postulantes_hpp_

#include<iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include <stdio.h>
#include <ctype.h>

using namespace std;

class Postulantes {
private:
public:
  string Nombre;
  int  Edad;
  string GrupoSanguineo;
  char Rh;
  char Sexo;
  int Peso;
  string Cedula;
  string Correo;
  string Telefono;
  friend ostream &operator<<(ostream &os, Postulantes &p);



  //constructores

  Postulantes();

  //destructores
  //~postulante();
  //metodos
  string askname();
  int askage();
  string askgs();
  char askrh();
  char asksexo();
  int askpeso();
  string askcedula();
  string askcorreo();
  string asktelefono();
};
ostream & operator<<(ostream &os,Postulantes &p);
#endif
