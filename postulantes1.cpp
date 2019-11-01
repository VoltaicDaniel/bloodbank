#include "postulantes.hpp"


Postulantes:: Postulantes(){
  Nombre = askname();
  Edad = askage();
  GrupoSanguineo =askgs();
  Rh = askrh();
  Sexo = asksexo();
  Peso = askpeso();
  Cedula = askcedula();
  Correo = askcorreo();
  Telefono = asktelefono();
}
 string Postulantes::askname(){
   string nombre;
   cout<<"Ingrese su nombre aqui: ";
   cin>>nombre;
   return nombre;
 }

 int Postulantes::askage(){
   int edad=0;
   cout<<"ingrese su edad:";
   cin >> edad;
   return edad;
 }
 string Postulantes::askgs(){
   string gs;
   string s= "";
   cout<<"Ingrese su grupo sanguineo: ";
   cin>> gs;
   for(unsigned int  i=0; i<gs.size();i++){
       s += toupper(gs[i]);
   }

   gs=s;
   s="";
   while (gs != "O" && gs != "A" && gs != "B" && gs != "AB"){
     cout<< " El Grupo Sanguineo no es valido, por favor elija entre O,A,B,AB: " ;
     cin>> gs;
     for(unsigned int  i=0; i<gs.size();i++){
         s += toupper(gs[i]);
     }

     gs=s;
     s="";
   }
   return gs;
 }

 char Postulantes::askrh(){
   char rh;
   cout<<"Ingrese su rh: ";
   cin >> rh;

   while (rh != '+' && rh != '-' ){
     cout<< " El rh no es valido, por favor elija entre + o -: ";
     cin>> rh;
   }
   return rh;
 }
 char Postulantes::asksexo(){
   char sexo;
   cout<<"Ingrese su sexo aqui: ";
   cin >> sexo;
   while (sexo != 'F' && sexo != 'M' && sexo != 'm' && sexo != 'f'){
     cout<< " El sexo no es valido, por favor elija entre M o F: ";
     cin>> sexo;
   }
   return sexo;
 }

 int Postulantes::askpeso(){
   int peso;
   cout<<"Ingrese su peso : ";
   cin >> peso;
   return peso;
 }

 string Postulantes::askcedula(){
   string cedula;
   cout<<"ingrese su cedula:";
   cin >> cedula;
   return cedula;
 }

 string Postulantes::askcorreo(){
   string correo;
   cout<<"ingrese su correo electronico:";
   cin >> correo;
   return correo;
 }

 string Postulantes::asktelefono(){
   string correo;
   cout<<"ingrese su correo electronico:";
   cin >> correo;
   return correo;
 }

 ostream & operator<<(ostream &os,Postulantes &p){
   return os<<"nombre: "<<p.Nombre<<'\n'<<"edad: "<<p.Edad<<'\n'<<"grupo S: "<<p.GrupoSanguineo<<'\n'<<"rh: "<<p.Rh<<'\n'<<"peso: "<<p.Peso<<'\n'<<"sexo: "<<p.Sexo<<endl;
 }
