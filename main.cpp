#include "postulantes.hpp"

//este main fue hecho para agilizar la presentacion pero se puede cambiar por uno que haga el cuestionario

int main() {
  vector<Postulantes> datos_importantes;
  vector<Postulantes> BaseDeDatos;
  //Postulantes Pformulario(BaseDeDatos);
  Postulantes Postulante1("Maria Lozano",20,"a",'-','f',"1000047984","ml@ur.com","3154303893",false,BaseDeDatos);
  Postulantes Postulante2("Daniel Ramirez ",40,"ab",'+','f',"1078044964","ml@ur.com","3154373593",true,BaseDeDatos);
  Postulantes Postulante3("Michael Hernandez",30,"ab",'-','f',"134047984","ml@ur.com","3154503593",true,BaseDeDatos);
  Postulantes Postulante4("Santiago Polo",18,"a",'+','f',"1435047984","ml@ur.com","3444343893",false,BaseDeDatos);
  Postulantes Postulante5("Andres Pinto",23,"b",'-','f',"104547984","ml@ur.com","315445683",true,BaseDeDatos);
  Postulantes Postulante6("Elsa Pato",27,"b",'+','f',"10793453","ml@ur.com","42366344",true,BaseDeDatos);
  Postulantes Postulante7("Scarlett Tellez",33,"a",'-','f',"432553443","ml@ur.com","435364656",false,BaseDeDatos);
  Postulantes Postulante8("Maria Conde",33,"o",'+','f',"1055647984","ml@ur.com","4564332",true,BaseDeDatos);
  Postulantes Postulante9("Oscar Ramirez",17,"o",'-','f',"1445457984","ml@ur.com","435244",true,BaseDeDatos);

  Postulante1.clasificacion(BaseDeDatos);

  vector<Receptores> Requeridos;
  Receptores Receptor1("ab",'+',"1004555047",Requeridos);
  Receptores Receptor2("ab",'-',"104545047",Requeridos);
  Receptores Receptor3("b",'+',"1004545047",Requeridos);
  Receptores Receptor4("b",'-',"1004545047",Requeridos);
  Receptores Receptor5("a",'-',"1004545047",Requeridos);
  Receptores Receptor6("a",'-',"1054545047",Requeridos);
  Receptores Receptor7("o",'+',"100454047",Requeridos);
  Receptores Receptor8("o",'-',"1000545047",Requeridos);
  Receptor1.clasificacion(Requeridos);
  cout<<Receptor7.Search(Postulante1)<<'\n';
  //este for es para imprimir los donantes aptos y mostrar el proceso
  for(unsigned int i = 0; i< Receptor7.Mis_Donantes.size();i++){
    cout<<"Un posible donante es:"<<Receptor7.Mis_Donantes[i]<<'\n';
  }
   return 0;
 }
