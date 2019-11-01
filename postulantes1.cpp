#include "postulantes.hpp"


Postulantes:: Postulantes(){
  Nombre = ask_name();
  Edad = ask_age();
  GrupoSanguineo =ask_gs();
  Rh = ask_rh();
  Sexo = ask_sexo();
  Cedula = ask_cedula();
  Correo = ask_correo();
  Telefono = ask_telefono();
}
 string Postulantes::ask_name(){
   string nombre;
   cout<<"Ingrese su nombre aqui: ";
   cin>>nombre;
   return nombre;
 }

 int Postulantes::ask_age(){
   int edad=0;
   cout<<"ingrese su edad:";
   cin >> edad;
   return edad;
 }
 string Postulantes::ask_gs(){
   string gs;
   string s= "";
   cout<<"Ingrese su grupo sanguineo(O,A,B,AB): ";
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

 char Postulantes::ask_rh(){
   char rh;
   cout<<"Ingrese su rh(+/-) : ";
   cin >> rh;

   while (rh != '+' && rh != '-' ){
     cout<< " El rh no es valido, por favor elija entre + o -: ";
     cin>> rh;
   }
   return rh;
 }
 char Postulantes::ask_sexo(){
   char sexo;
   cout<<"Ingrese su sexo aqui(f/m) : ";
   cin >> sexo;
   while (sexo != 'F' && sexo != 'M' && sexo != 'm' && sexo != 'f'){
     cout<< " El sexo no es valido, por favor elija entre M o F: ";
     cin>> sexo;
   }
   return sexo;
 }

 int Postulantes::ask_peso(){
   int peso;
   cout<<"Ingrese su peso en kg: ";
   cin >> peso;
   return peso;
 }

 string Postulantes::ask_cedula(){
   string cedula;
   cout<<"ingrese su cedula:";
   cin >> cedula;
   return cedula;
 }

 string Postulantes::ask_correo(){
   string correo;
   cout<<"ingrese su correo electronico:";
   cin >> correo;
   return correo;
 }

 string Postulantes::ask_telefono(){
   string telefono;
   cout<<"ingrese su numero de telefono:";
   cin >> telefono;
   return telefono;
 }

 string Postulantes::ask_direccion(){
   string direccion;
   cout<<"ingrese su direccion(pais/ciudad/barrio/calle/carrera):";
   cin >> direccion;
   return direccion;
 }

 bool Postulantes::examenfisico(){
   bool x;
   cout<<"por favor ingrese estos datos con ayuda del medico asignado: "<<endl;
   Peso = ask_peso();
   TensionArterialsis = ask_tensionarterial_sistolica();
   TensionArterialdias = ask_tensionarterial_diastolica();
   Pulso = ask_pulso();
   Temperatura = ask_temperatura();
   Hemoglobina = ask_hemoglobina();
   Hematocrito = ask_hematocrito();
   Plaquetas = ask_recuentoplaquetas();
   if(Peso>50 && TensionArterialdias<100 && TensionArterialsis < 180 && Pulso > 50 && Pulso <100  && Hematocrito>38){
     if(Sexo=='f'){
       if(Hemoglobina>12.5){
         x=true;
       }
     }else{
       if(Hemoglobina>13.5){
         x=true;
       }
     }
   }else{ x= false; }
   return x;
 }

 int Postulantes::ask_tensionarterial_sistolica(){
   int tension;
   cout<<"Ingrese la tension arterial sistolica  del postulante(MmHg) : ";
   cin >> tension;
   return tension;
 }

 int Postulantes::ask_tensionarterial_diastolica(){
   int tension1;
   cout<<"Ingrese la tension arterial diastolica  del postulante(MmHg) : ";
   cin >> tension1;
   return tension1;
 }

 int Postulantes::ask_pulso(){
   int pulso;
   cout<<"Ingrese el pulso del postulante : ";
   cin >> pulso;
   return pulso;
 }
 int Postulantes::ask_temperatura(){
   int temperatura;
   cout<<"Ingrese la temperatura del postulante(°C) : ";
   cin >> temperatura;
   return temperatura;
 }
 int Postulantes::ask_hemoglobina(){
   int hemoglobina;
   cout<<"Ingrese la hemoglobina del postulante(gr/dl) : ";
   cin >> hemoglobina;
   return hemoglobina;
 }
 int Postulantes::ask_hematocrito(){
   int hematocrito;
   cout<<"Ingrese los hematocritos del postulante(%) : ";
   cin >> hematocrito;
   return hematocrito;
 }
 int Postulantes::ask_recuentoplaquetas(){
   int plaquetas;
   cout<<"Ingrese las plaquetas del postulante : ";
   cin >> plaquetas;
   return plaquetas;
 }

 ostream & operator<<(ostream &os,Postulantes &p){
   return os<<"nombre: "<<p.Nombre<<'\n'<<"edad: "<<p.Edad<<'\n'<<"grupo S: "<<p.GrupoSanguineo<<'\n'<<"rh: "<<p.Rh<<'\n'<<"peso: "<<p.Peso<<'\n'<<"sexo: "<<p.Sexo<<endl;
 }
