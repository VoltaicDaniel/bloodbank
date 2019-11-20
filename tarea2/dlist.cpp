//Michael Gerard Jaime III Hernandez Lopez
//Daniel Felipe Ramirez
#ifdef __dlist_hpp_
template <typename dataType>
List<dataType>::List(){
  primero = nullptr;
  ultimo = nullptr;
  count = 0;
}
template <typename dataType>
List<dataType>::List(const List & other){
  cell *copy = ultimo;
  while(copy->anterior != nullptr){
    push_front(ultimo->anterior);
    copy = ultimo->anterior;
  }
}
template<typename dataType>
List<dataType> ::~List(){
  clear();
}
template<typename dataType>
List <dataType>  & List<dataType>::operator=(const List &other){
  cell *copy = ultimo;
  while(copy->anterior != nullptr){
    push_front(ultimo->anterior);
    copy = ultimo->anterior;
  }
  return *this;
}
template<typename dataType>
int List<dataType> :: size() const{
  return count;
}
template <typename dataType>
bool List<dataType> :: empty()const{
  return count==0;
}
template <typename dataType>
void List<dataType> :: clear(){
  while(count != 0){
    pop_back();
  }
}
template <typename dataType>
dataType & List<dataType> :: back(){
  return ultimo->dato;
}
template <typename dataType>
dataType & List<dataType>:: front(){
  return primero ->dato;
}
template <typename dataType>
void List<dataType> :: push_back(const dataType & rhs){
  if(empty()){
    cell *temp = new cell;
    temp->dato = rhs;
    temp->siguiente = nullptr;
    temp->anterior = nullptr;
    primero = temp;
    ultimo = temp;
    count ++;
  }

  else{
  cell *temp = new cell;
  temp->dato = rhs;
  temp->anterior = ultimo;
  temp->siguiente = nullptr;
  ultimo = temp;
  count++;
  }

}
template<typename dataType>
void List<dataType>::push_front(const dataType &rhs){
  cell *nuevo = new cell;
  nuevo -> dato = rhs;
  nuevo -> anterior = nullptr;
  if(empty()){
    nuevo -> siguiente = nullptr;
    primero = nuevo;
    ultimo = nuevo;
  }else{
    nuevo -> siguiente = primero;
    primero->anterior = nuevo;
    primero = nuevo;
  }
  count++;
}
template <typename dataType>
void List<dataType> :: pop_back(){
  if(count==0){
    cout<<"La Lista esta vacia"<<'\n';
  }
  else if(count ==1){
    cell *anterior = ultimo;
    ultimo = nullptr;
    primero = nullptr;
    delete anterior;
    count --;
  }
  else{
    cell *anterior = ultimo;
    ultimo = ultimo->anterior;
    ultimo->siguiente = nullptr;
    delete anterior;
    count--;
  }

}
template <typename dataType>
void List<dataType> :: pop_front(){
  if(count==0){
    cout<<"La Lista esta vacia"<<'\n';
  }
  else if(count ==1){
    cell *anterior = primero;
    ultimo = nullptr;
    primero = nullptr;
    delete anterior;
    count --;
  }
  else{
    cell *principio = primero;
    primero = primero->siguiente;
    primero->anterior = nullptr;
    delete principio;
    count--;
  }
}

#endif
