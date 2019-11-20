#include "postulantes.hpp"

int main() {
  vector<Postulantes> datos_importantes;
  vector<Postulantes> reales;
  Postulantes Postulante1("mafe",23,'a','+','f',"234","asfdgb","sdfgb",true);
  Postulantes Postulante2("mafe",23,'o','-','f',"234","asfdgb","s646b",true);


  if(Postulante1.Aceptado == true ){
    datos_importantes.push_back(Postulante1);
  }
  if(Postulante2.Aceptado == true ){
    datos_importantes.push_back(Postulante2);
  }
  for(unsigned int i=0;i<datos_importantes.size();i++){
    cout<<datos_importantes[i]<<endl;
  }

  return 0;
}
