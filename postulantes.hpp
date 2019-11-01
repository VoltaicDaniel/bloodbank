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
  string Direccion;
  int TensionArterialsis;
  int TensionArterialdias;
  int Pulso;
  int Temperatura;
  int Hemoglobina;
  int Hematocrito;
  int Plaquetas;
  friend ostream &operator<<(ostream &os, Postulantes &p);



  //constructores

  Postulantes();

  //destructores
  //~postulante();
  //metodos
  string ask_name();
  int ask_age();
  string ask_gs();
  char ask_rh();
  char ask_sexo();
  string ask_cedula();
  string ask_correo();
  string ask_telefono();
  string ask_direccion();
  bool examenfisico();
  int ask_peso();
  int ask_tensionarterial_sistolica();
  int ask_tensionarterial_diastolica();
  int ask_pulso();
  int ask_temperatura();
  int ask_hemoglobina();
  int ask_hematocrito();
  int ask_recuentoplaquetas();

};
ostream & operator<<(ostream &os,Postulantes &p);
#endif
