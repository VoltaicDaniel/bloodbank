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
  //bool Aceptado = aceptado();
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
  double Hemoglobina;
  int Hematocrito;
  char Sentir;
  char Edadpeso;
  int Plaquetas;
  bool Donacion;
  char Vacunas;
  char Enfermedades_cardiacas;
  char Accidentes_cerebro;
  char Anemia_3;
  char Renales;
  char Dientes;
  char Infecciones;
  char Embarazo;
  char Endoscopias;
  char Transfuciones;
  char Tatuajes;
  char Accidentes_salud;
  char Conv_hepatitis;
  char Vacuna_antirrabica;
  char Trans_sexual;
  char Gay;
  char Mujeres_gay;
  char Sexo_ocasional;
  char Sexo_adictos;
  char Prostitucion;
  char Sexo_prostitutes;
  char Sexo_sidahepa;
  char Sexo_transfuciones;
  char Carcel;
  char Hepatitis_diez;
  char Chagas;
  char Hormona_cre;
  char Hemofilico;
  char Drogas_inyectable;
  char Sida_posi;
  char Manifesta_sida;
  char Paludismo;
  char Dengue;
  bool Examenfisico;
  bool Condiciones_generales;
  bool Impedimientos;
  bool Cuatrodias;
  bool Mujeres;
  bool Unyear;
  bool Impedimientos_definitivos;
  bool Aceptado;
  friend ostream &operator<<(ostream &os, Postulantes &p);



  //constructores
  Postulantes(string name,int edad,char ola,char a,char b,string c,string d,string e,bool f);
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
  double ask_hemoglobina();
  int ask_hematocrito();
  int ask_recuentoplaquetas();

  bool condiciones_generales();
  bool ask_donacion();
  char ask_vacunas();
  char ask_sentir();
  char ask_edadpeso();

  bool impedimientos();
  char ask_enfermedades_cardiacas();
  char ask_accidentes_cerebro();
  char ask_anemia_3();
  char ask_renales();

  bool cuatrodias();
  char ask_dientes();
  char ask_infecciones();

  bool mujeres();
  char ask_embarazo();

  bool unyear();
  char ask_endoscopias();
  char ask_transfuciones();
  char ask_tatuajes();
  char ask_accidentes_salud();
  char ask_conv_hepatitis();
  char ask_vacuna_antirrabica();
  char ask_trans_sexual();
  char ask_gay();
  char ask_mujeres_gay();
  char ask_sexo_ocasional();
  char ask_sexo_adictos();
  char ask_prostitucion();
  char ask_sexo_prostitutes();
  char ask_sexo_sidahepa();
  char ask_sexo_transfuciones();
  char ask_carcel();

  bool impedimientos_definitivos();
  char ask_hepatitis_diez();
  char ask_chagas();
  char ask_hormona_cre();
  char ask_hemofilico();
  char ask_drogas_inyectable();
  char ask_sida_posi();
  char ask_manifesta_sida();
  char ask_paludismo();
  char ask_dengue();

  bool aceptado();

};
ostream & operator<<(ostream &os,Postulantes &p);

#endif
