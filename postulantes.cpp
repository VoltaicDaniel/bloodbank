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
   cout<<endl;
   if(x==true){
     cout<<"el examen fisico salio bien, continuemos"<<endl;
   }else{
     cout<<"ha fallado el examen fisico, no puede donar"<<endl;
   }
   cout<<endl;
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

 double Postulantes::ask_hemoglobina(){
   double hemoglobina;
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
 bool Postulantes::ask_donacion(){
   int donacion;
   bool x=false;
   cout<<"Indique hace cuantos meses no dona sangre, y si su respuesta es que nunca ha donado inserte el numero (-1):";
   cin>> donacion;
   if(Sexo=='f'|| Sexo=='F'){
     if(donacion>=4 || donacion==-1){
       x=true;
     }
   }else{
     if(donacion>=3 || donacion==-1){
       x=true;
     }
   }
   return x;
 }
 char Postulantes::ask_vacunas(){
   char vacunas;
   cout<<"Usted recibe vacunas, antibioticos u otros medicamentos?, si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> vacunas;
   while (vacunas != 'F' && vacunas != 'V' && vacunas != 'v' && vacunas != 'f'){
     cout<< " La respuesta no es valida, porfavor ingresE (v) o (F):";
     cin>> vacunas;
   }
   return vacunas;
 }

 char Postulantes::ask_sentir(){
   char sentir;
   cout<<"Se siente bien hoy y goza de buena salud?, si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> sentir;
   while (sentir != 'F' && sentir != 'V' && sentir != 'v' && sentir != 'f'){
     cout<< " La respuesta no es valida, porfavor ingresE (v) o (F):";
     cin>> sentir;
   }
   return sentir;
 }

 char Postulantes::ask_edadpeso(){
   char edadpeso='f';

   if(Edad>=18 && Edad<=65 && Peso >= 50){
     cout<<"su edad y su peso son aptos para donar"<<endl;
     edadpeso='v';
   }else{
     cout<<"por su edad y su peso no son aptos para donar "<<endl;
   }
   return edadpeso;
 }

 bool Postulantes::condiciones_generales(){
   bool xx=false;
   Vacunas = ask_vacunas();
   Donacion = ask_donacion();
   Sentir = ask_sentir();
   Edadpeso= ask_edadpeso();
   if((Donacion==true) && (Vacunas=='f' || Vacunas=='F')&& (Sentir=='v' || Sentir=='V') && (Edadpeso=='v' || Edadpeso=='V')){
     xx=true;
   }
   cout<<'\n';
   if(xx==true){
     cout<<"las condiciones generales son buenas, continuemos"<<endl;
   }else{
     cout<<"no tiene las condiciones generales, no puede donar"<<endl;
   }
   cout<<endl;
   return xx;
 }

 bool Postulantes::impedimientos(){
   bool xy=false;
   Enfermedades_cardiacas = ask_enfermedades_cardiacas();
   Accidentes_cerebro = ask_accidentes_cerebro();
   Anemia_3 = ask_anemia_3();
   Renales = ask_renales();
   if((Enfermedades_cardiacas=='f' || Enfermedades_cardiacas=='F') && (Accidentes_cerebro=='f'|| Accidentes_cerebro=='F') && (Anemia_3=='f' || Anemia_3=='F') && (Renales=='f'||Renales=='F')){
     xy=true;
   }
   cout<<'\n';
   if(xy==true){
     cout<<"Estos aspectos son correctos, continuemos"<<endl;
   }else{
     cout<<"No tiene los aspectos necesarios, no puede donar"<<endl;
   }
   cout<<endl;
   return xy;
 }


 char Postulantes::ask_enfermedades_cardiacas(){
   char enfermedades_cardiacas;
   cout<<"Usted posee enfermedades cardíacas (dolor en el pecho, infarto, etc.), pulmonares, asma bronquial, tuberculosis activa, hipertensión arterial no controlada? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> enfermedades_cardiacas;
   while (enfermedades_cardiacas != 'F' && enfermedades_cardiacas != 'V' && enfermedades_cardiacas != 'v' && enfermedades_cardiacas != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> enfermedades_cardiacas;
   }
   return enfermedades_cardiacas;
 }

 char Postulantes::ask_accidentes_cerebro(){
   char accidentes_cerebro;
   cout<<"Ha padecido accidentes cerebrovasculares, epilepsia (convulsiones), lipotimias o desmayos? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> accidentes_cerebro;
   while (accidentes_cerebro != 'F' && accidentes_cerebro != 'V' && accidentes_cerebro != 'v' && accidentes_cerebro != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> accidentes_cerebro;
   }
   return accidentes_cerebro;
 }
 char Postulantes::ask_anemia_3(){
   char anemia;
   cout<<"Padece anemia, trastornos de la coagulación, cáncer? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> anemia;
   while (anemia != 'F' && anemia != 'V' && anemia != 'v' && anemia != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> anemia;
   }
   return anemia;
 }

 char Postulantes::ask_renales(){
   char renales;
   cout<<"Padece enfermedades renales, diabetes en tratamiento con insulina, úlcera gastroduodenal en actividad, colitis ulcerosa? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> renales;
   while (renales != 'F' && renales != 'V' && renales != 'v' && renales != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> renales;
   }
   return renales;
 }

 bool Postulantes::cuatrodias(){
   cout<<"a continuacion responda estas preguntas solo tomando en cuenta las ultimas 72 horas: "<<endl;
   bool aa=false;
   Dientes = ask_dientes();
   Infecciones = ask_infecciones();
   if((Dientes=='f' || Dientes=='F') && (Infecciones=='f'|| Infecciones=='F')){
     aa=true;
   }
   cout<<'\n';
   if(aa==true){
     cout<<"Tiene los aspectos adecuados, continuemos"<<endl;
   }else{
     cout<<"Los aspectos no son adecuados, no puede donar"<<endl;
   }
   cout<<endl;
   return aa;
 }

 char Postulantes::ask_dientes(){
   char dientes;
   cout<<"Ha tenido procedimientos odontológicos (extracción, tratamiento de conducto, limpieza dentaria, etc.).? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> dientes;
   while (dientes != 'F' && dientes != 'V' && dientes != 'v' && dientes != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> dientes;
   }
   return dientes;
 }
 char Postulantes::ask_infecciones(){
   char infecciones;
   cout<<"Ha tenido infecciones, vómitos, diarrea y/o fiebre? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> infecciones;
   while (infecciones != 'F' && infecciones != 'V' && infecciones != 'v' && infecciones != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> infecciones;
   }
   return infecciones;
 }

 char Postulantes::ask_embarazo(){
   char embarazo;
   cout<<"esta usted durante el embarazo, lleva 8 semanas después de un parto o lleva 12 meses luego de su cesárea o aborto? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> embarazo;
   while (embarazo != 'F' && embarazo != 'V' && embarazo != 'v' && embarazo != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> embarazo;
   }
   return embarazo;
 }

 bool Postulantes::mujeres(){
   bool ab=false;

   Embarazo = ask_embarazo();
   if((Embarazo=='f') || (Embarazo=='F')){
     ab=true;
   }
   cout<<'\n';
   if(ab==true){
     cout<<"Tiene los aspectos adecuados, continuemos"<<endl;
   }else{
     cout<<"Los aspectos no son adecuados, no puede donar"<<endl;
   }
   cout<<endl;
   return ab;
 }



 bool Postulantes::unyear(){
   cout<<"A continuacion responda estas preguntas teniendo en cuenta solo sus ultimos 12 meses: "<<endl;
   bool abc=false;
   Endoscopias = ask_endoscopias();
   Transfuciones = ask_transfuciones();
   Tatuajes = ask_tatuajes();
   Accidentes_salud = ask_accidentes_salud();
   Conv_hepatitis = ask_conv_hepatitis();
   Vacuna_antirrabica = ask_vacuna_antirrabica();
   Trans_sexual = ask_trans_sexual();
   Gay = ask_gay();
   Mujeres_gay = ask_mujeres_gay();
   Sexo_ocasional = ask_sexo_ocasional();
   Sexo_adictos = ask_sexo_adictos();
   Prostitucion = ask_prostitucion();
   Sexo_prostitutes = ask_sexo_prostitutes();
   Sexo_sidahepa = ask_sexo_sidahepa();
   Sexo_transfuciones= ask_sexo_transfuciones();
   Carcel = ask_carcel();
   if((Endoscopias=='f' || Endoscopias=='F') && (Transfuciones=='f' || Transfuciones=='F') && (Tatuajes=='F' || Tatuajes=='f')&& (Accidentes_salud=='F' || Accidentes_salud=='f') && (Conv_hepatitis=='F' || Conv_hepatitis=='f')&& (Vacuna_antirrabica=='F' || Vacuna_antirrabica=='f') && (Trans_sexual=='F' || Trans_sexual=='f')&& (Gay=='F' || Gay=='f') && (Mujeres_gay=='F' || Mujeres_gay=='f')&& (Sexo_ocasional=='F' || Sexo_ocasional=='f') && (Sexo_adictos=='F' || Sexo_adictos=='f')&& (Prostitucion=='F' || Prostitucion=='f') && (Sexo_prostitutes=='F' || Sexo_prostitutes=='f')&& (Sexo_sidahepa=='F' || Sexo_sidahepa=='f')&& (Sexo_transfuciones=='F' || Sexo_transfuciones=='f')&& (Carcel=='F' || Carcel=='f')){
     abc=true;
   }
   cout<<'\n';
   if(abc==true){
     cout<<"Tiene los aspectos adecuados, continuemos"<<endl;
   }else{
     cout<<"Los aspectos no son adecuados, no puede donar"<<endl;
   }
   cout<<endl;
   return abc;
 }
 char Postulantes::ask_endoscopias(){
   char endoscopias;
   cout<<"Ha tenido endoscopías, laparoscopías, cateterismos o tratamiento quirúrgico? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> endoscopias;
   while (endoscopias != 'F' && endoscopias != 'V' && endoscopias != 'v' && endoscopias != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> endoscopias;
   }
   return endoscopias;
 }
 char Postulantes::ask_transfuciones(){
   char transfuciones;
   cout<<"Ha recibido transfusiones? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> transfuciones;
   while (transfuciones != 'F' && transfuciones != 'V' && transfuciones != 'v' && transfuciones != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> transfuciones;
   }
   return transfuciones;
 }
 char Postulantes::ask_tatuajes(){
   char tatuajes;
   cout<<"Tiene tatuajes, perforaciones de la piel en alguna parte del cuerpo o acupuntura? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> tatuajes;
   while (tatuajes != 'F' && tatuajes != 'V' && tatuajes != 'v' && tatuajes != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> tatuajes;
   }
   return tatuajes;
 }
 char Postulantes::ask_accidentes_salud(){
   char accidentes_salud;
   cout<<"Como trabajador de salud,ha sufrido accidentes laborales (punciones, salpicaduras, etc.)? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> accidentes_salud;
   while (accidentes_salud != 'F' && accidentes_salud != 'V' && accidentes_salud != 'v' && accidentes_salud != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> accidentes_salud;
   }
   return accidentes_salud;
 }
 char Postulantes::ask_conv_hepatitis(){
   char conv_hepatitis;
   cout<<"Has convivido con personas con hepatitis? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> conv_hepatitis;
   while (conv_hepatitis != 'F' && conv_hepatitis != 'V' && conv_hepatitis != 'v' && conv_hepatitis != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> conv_hepatitis;
   }
   return conv_hepatitis;
 }
 char Postulantes::ask_vacuna_antirrabica(){
   char vacuna_antirrabica;
   cout<<"Tienes la vacuna antirrábica? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> vacuna_antirrabica;
   while (vacuna_antirrabica != 'F' && vacuna_antirrabica != 'V' && vacuna_antirrabica != 'v' && vacuna_antirrabica != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> vacuna_antirrabica;
   }
   return vacuna_antirrabica;
 }
 char Postulantes::ask_trans_sexual(){
   char trans_sexual;
   cout<<"Tienes enfermedades de transmisión sexual: sífilis o gonorrea? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> trans_sexual;
   while (trans_sexual != 'F' && trans_sexual != 'V' && trans_sexual != 'v' && trans_sexual != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> trans_sexual;
   }
   return trans_sexual;
 }
 char Postulantes::ask_gay(){
   char gay;
   cout<<"Si eres hombre, tienes relaciones sexuales frecuentes con otros hombres sin protección? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F), si es mujer ingrese (F):";
   cin>> gay;
   while (gay != 'F' && gay != 'V' && gay != 'v' && gay != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> gay;
   }
   return gay;
 }
 char Postulantes::ask_mujeres_gay(){
   char mujeres_gay;
   cout<<"Si eres mujer, has tenido relaciones con hombres incluidos en la pregunta anterior? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F), si es hombre ingrese (F):";
   cin>> mujeres_gay;
   while (mujeres_gay != 'F' && mujeres_gay != 'V' && mujeres_gay != 'v' && mujeres_gay != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> mujeres_gay;
   }
   return mujeres_gay;
 }
 char Postulantes::ask_sexo_ocasional(){
   char sexo_ocasional;
   cout<<"Has mantenido relaciones sexuales ocasionales o tienes conocimiento de que su pareja las haya tenido,  aun con protección? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> sexo_ocasional;
   while (sexo_ocasional != 'F' && sexo_ocasional != 'V' && sexo_ocasional != 'v' && sexo_ocasional != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> sexo_ocasional;
   }
   return sexo_ocasional;
 }
 char Postulantes::ask_sexo_adictos(){
   char sexo_adictos;
   cout<<"Has tenido relaciones sexuales con adictos o ex adictos a drogas? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> sexo_adictos;
   while (sexo_adictos != 'F' && sexo_adictos != 'V' && sexo_adictos != 'v' && sexo_adictos != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> sexo_adictos;
   }
   return sexo_adictos;
 }
 char Postulantes::ask_prostitucion(){
   char prostitucion;
   cout<<"Has ejercido la prostitucion? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> prostitucion;
   while (prostitucion != 'F' && prostitucion != 'V' && prostitucion != 'v' && prostitucion != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> prostitucion;
   }
   return prostitucion;
 }
 char Postulantes::ask_sexo_prostitutes(){
   char sexo_prostitutes;
   cout<<"Has tenido relaciones sexuales con personas que ejercen la prostitucion? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> sexo_prostitutes;
   while (sexo_prostitutes != 'F' && sexo_prostitutes != 'V' && sexo_prostitutes != 'v' && sexo_prostitutes != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> sexo_prostitutes;
   }
   return sexo_prostitutes;
 }
 char Postulantes::ask_sexo_sidahepa(){
   char sexo_sidahepa;
   cout<<"Has tenido relaciones sexuales con personas con SIDA o con prueba positiva para SIDA o hepatitis? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> sexo_sidahepa;
   while (sexo_sidahepa != 'F' && sexo_sidahepa != 'V' && sexo_sidahepa != 'v' && sexo_sidahepa != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> sexo_sidahepa;
   }
   return sexo_sidahepa;
 }
 char Postulantes::ask_sexo_transfuciones(){
   char sexo_transfuciones;
   cout<<"Has tenido relaciones sexuales con personas que reciban transfusiones, hemofílicos o en plan de diálisis? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> sexo_transfuciones;
   while (sexo_transfuciones != 'F' && sexo_transfuciones != 'V' && sexo_transfuciones != 'v' && sexo_transfuciones != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> sexo_transfuciones;
   }
   return sexo_transfuciones;
 }
 char Postulantes::ask_carcel(){
   char sexo_carcel;
   cout<<"Has estado encarcelado o detenido? si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> sexo_carcel;
   while (sexo_carcel != 'F' && sexo_carcel != 'V' && sexo_carcel != 'v' && sexo_carcel != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> sexo_carcel;
   }
   return sexo_carcel;
 }

 char Postulantes::ask_hepatitis_diez(){
   char hepatitis_diez;
   cout<<"¿ Has tenido hepatitis despues de los 10 años ? , si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> hepatitis_diez;
   while (hepatitis_diez != 'F' && hepatitis_diez!= 'V' && hepatitis_diez!= 'v' && hepatitis_diez != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> hepatitis_diez;
   }
   return hepatitis_diez;
 }
 char Postulantes::ask_chagas(){
   char chagas;
   cout<<"¿ Has tenido la enfermedad de chagas o brucelocis o prueba postiva para alguna de ellas? , si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> chagas;
   while (chagas != 'F' && chagas!= 'V' && chagas!= 'v' && chagas != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> chagas;
   }
   return chagas;
 }

 char Postulantes::ask_hormona_cre(){
   char hormona_cre;
   cout<<"¿ has recibido la hormoa de crecimiento antes de 1986 ? , si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> hormona_cre;
   while (hormona_cre != 'F' && hormona_cre!= 'V' && hormona_cre!= 'v' && hormona_cre != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> hormona_cre;
   }
   return hormona_cre;
 }

 char Postulantes::ask_hemofilico(){
   char hemofilico;
   cout<<"¿ Eres hemofilico, hemodializado o has recibido injertos de meninges o cornea ? , si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> hemofilico;
   while (hemofilico != 'F' && hemofilico!= 'V' && hemofilico!= 'v' && hemofilico != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> hemofilico;
   }
   return hemofilico;
 }

 char Postulantes::ask_drogas_inyectable(){
   char drogas_inyectable;
   cout<<"¿ Has tenido  adiccion a drogas inyectables en algun momento de tu vida ? , si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> drogas_inyectable;
   while (drogas_inyectable != 'F' && drogas_inyectable!= 'V' && drogas_inyectable!= 'v' && drogas_inyectable != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> drogas_inyectable;
   }
   return drogas_inyectable;
 }

 char Postulantes::ask_sida_posi(){
   char sida_posi;
   cout<<"¿ Tienes sida o alguna vez has tenido algun resultado positivo para sida? , si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> sida_posi;
   while (sida_posi != 'F' && sida_posi!= 'V' && sida_posi!= 'v' && sida_posi != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> sida_posi;
   }
   return sida_posi;
 }

 char Postulantes::ask_paludismo(){
   char paludismo;
   cout<<"¿ Has tenido paludismo o recibido medicamentos antipaludicos en forma preventiva en los ultimos tres años o ha estado en el ultimo año en paises donde existe esta enfermadad ? , si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> paludismo;
   while (paludismo != 'F' && paludismo!= 'V' && paludismo!= 'v' && paludismo != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> paludismo;
   }
   return paludismo;
 }

 char Postulantes::ask_manifesta_sida(){
   char manifesta_sida;
   cout<<"¿ Presenta manifestaciones clinicas que pueden estar asociadas con sida, como perdida de peso inexplicable, fiebre de mas de diez dias de evolucion o agrandamiento ganglionar ? , si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> manifesta_sida;
   while (manifesta_sida != 'F' && manifesta_sida!= 'V' && manifesta_sida!= 'v' && manifesta_sida != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>> manifesta_sida;
   }
   return manifesta_sida;
 }

 char Postulantes::ask_dengue(){
   char dengue;
   cout<<"¿ Has estado en los ultimos 30 dias por zonas afectadas por dengue ? , si su respuesta es positiva ingrese (V) de lo contrario ingrese (F):";
   cin>> dengue;
   while (dengue != 'F' && dengue!= 'V' && dengue!= 'v' && dengue != 'f'){
     cout<< " La respuesta no es valida, porfavor ingrese (v) o (F):";
     cin>>dengue;
   }
   return dengue;
 }

 bool Postulantes::impedimientos_definitivos(){
   cout<<"A continuacion responda estas preguntas sobre impedimientos impedimientos_definitivos: "<<endl;
   bool abcTodos=false;
   Hepatitis_diez = ask_hepatitis_diez();
   Chagas = ask_chagas();
   Hormona_cre = ask_hormona_cre();
   Hemofilico = ask_hemofilico();
   Drogas_inyectable = ask_drogas_inyectable();
   Sida_posi = ask_sida_posi();
   Manifesta_sida = ask_manifesta_sida();
   Paludismo = ask_paludismo();
   Dengue = ask_dengue();
   if((Hepatitis_diez=='f' || Hepatitis_diez=='F') && (Chagas=='f' || Chagas=='F') && (Hormona_cre=='F' || Hormona_cre=='f')&& (Hemofilico=='F' || Hemofilico=='f') && (Drogas_inyectable=='F' || Drogas_inyectable=='f')&& (Sida_posi=='F' || Sida_posi=='f') && (Manifesta_sida=='F' || Manifesta_sida=='f')&& (Paludismo=='F' || Paludismo=='f') && (Dengue=='F' || Dengue=='f')){
     abcTodos=true;
   }
   cout<<'\n';
   if(abcTodos==true){
     cout<<"Tiene los aspectos adecuados, continuemos"<<endl;
   }else{
     cout<<"Los aspectos no son adecuados, no puede donar"<<endl;
   }
   cout<<endl;
   return abcTodos;
 }

 bool Postulantes::aceptado(){
   bool resultado=false;
   Examenfisico = examenfisico();
   Condiciones_generales = condiciones_generales();
   Impedimientos = impedimientos();
   Cuatrodias = cuatrodias();
   Mujeres = mujeres();
   Unyear = unyear();
   Impedimientos_definitivos = impedimientos_definitivos();
   if((Examenfisico==true)&&(Condiciones_generales==true)&&(Impedimientos==true)&&(Cuatrodias==true)&&(Mujeres==true)&&(Unyear==true)&&(Impedimientos_definitivos==true)){
     resultado=true;
   }
   if(resultado==true){
      cout<<"!FELICIDADES¡ la persona puede donar, continue"<<endl;
   }else{
      cout<<"Lastimosamente no puede donar. cuidese"<<endl;
   }
   return resultado;
 }


 ostream & operator<<(ostream &os,Postulantes &p){
   return os<<"nombre: "<<p.Nombre<<'\n'<<"edad: "<<p.Edad<<'\n'<<"grupo S: "<<p.GrupoSanguineo<<'\n'<<"rh: "<<p.Rh<<'\n'<<"peso: "<<p.Peso<<'\n'<<"sexo: "<<p.Sexo<<endl;
 }
