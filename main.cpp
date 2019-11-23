#include "postulantes.hpp"

int main() {
  vector<Postulantes> datos_importantes;
  vector<Postulantes> BaseDeDatos;
  Postulantes Postulante1("mafe",23,"a",'-','f',"234","asfdgb","sdfgb",true,BaseDeDatos);
  Postulantes Postulante2("daniel ",23,"ab",'+','f',"234","asfdgb","s646b",true,BaseDeDatos);
  Postulantes Postulante3("michael",23,"ab",'-','f',"234","asfdgb","s646b",true,BaseDeDatos);
  Postulantes Postulante4("santiago",23,"a",'+','f',"234","asfdgb","s646b",true,BaseDeDatos);
  Postulantes Postulante5("natsu",23,"b",'-','f',"234","asfdgb","s646b",true,BaseDeDatos);
  Postulantes Postulante6("elsa",23,"b",'+','f',"234","asfdgb","s646b",true,BaseDeDatos);
  Postulantes Postulante7("luna",23,"a",'-','f',"234","asfdgb","s646b",true,BaseDeDatos);
  Postulantes Postulante8("lucyfer",23,"o",'+','f',"234","asfdgb","s646b",true,BaseDeDatos);
  Postulantes Postulante9("Cejaz Negraz",23,"o",'-','f',"234","asfdgb","s646b",true,BaseDeDatos);

  Postulante1.clasificacion(BaseDeDatos);

  vector<Receptores> Requeridos;
  Receptores Receptor1("ab",'+',"1000146047",Requeridos);
  Receptores Receptor2("ab",'-',"1000146047",Requeridos);
  Receptores Receptor3("b",'+',"1000146047",Requeridos);
  Receptores Receptor4("b",'-',"1000146047",Requeridos);
  Receptores Receptor5("a",'+',"1000146047",Requeridos);
  Receptores Receptor6("a",'-',"1000146047",Requeridos);
  Receptores Receptor7("o",'+',"1000146047",Requeridos);
  Receptores Receptor8("o",'-',"1000146047",Requeridos);
  Receptor1.clasificacion(Requeridos);
  cout<<Receptor5.Search(Receptor5,Postulante1)<<'\n';
  for(unsigned int i = 0; i< Receptor5.Mis_Donantes.size();i++){
    cout<<"Un posible donante para el Receptor No 5 es;"<<Receptor5.Mis_Donantes[i]<<'\n';
  }
   return 0;
 }
