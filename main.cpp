#include "postulantes.hpp"

int main() {
  vector<Postulantes> datos_importantes;
  vector<Postulantes> BaseDeDatos;
  Postulantes Postulante1("mafe",23,"a",'+','f',"234","asfdgb","sdfgb",true,BaseDeDatos);
  Postulantes Postulante2("daniel ",23,"ab",'+','f',"234","asfdgb","s646b",false,BaseDeDatos);
  Postulantes Postulante3("michael",23,"ab",'-','f',"234","asfdgb","s646b",true,BaseDeDatos);
  Postulantes Postulante4("santiago",23,"a",'+','f',"234","asfdgb","s646b",false,BaseDeDatos);
  Postulantes Postulante5("natsu",23,"b",'-','f',"234","asfdgb","s646b",true,BaseDeDatos);
  Postulantes Postulante6("elsa",23,"a",'+','f',"234","asfdgb","s646b",false,BaseDeDatos);
  Postulantes Postulante7("luna",23,"a",'-','f',"234","asfdgb","s646b",true,BaseDeDatos);
  Postulantes Postulante8("lucyfer",23,"o",'+','f',"234","asfdgb","s646b",true,BaseDeDatos);
  Postulantes Postulante9("Cejaz Negraz",23,"o",'-','f',"234","asfdgb","s646b",false,BaseDeDatos);

  Postulante1.Reclasificacion(BaseDeDatos);
  cout<<Postulante1.o[0]<<'\n';
  cout<<Postulante1.ab[0]<<'\n';

  cout<<BaseDeDatos[1]<<'\n';

   return 0;
 }
