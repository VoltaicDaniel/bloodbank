#ifndef __dlist_hpp_
#define __dlist_hpp_

#include<iostream>
using namespace std;


template<typename dataType>
class List{
private:
  struct cell {
    cell *anterior;
    cell *siguiente;
    dataType dato;
  };
  int count;
  cell *primero;
  cell *ultimo;
public:
  List();
  List(const List & other);
  ~List();
  List & operator=(const List & other);
  int size() const;
  bool empty() const;
  void clear();

  dataType & back();
  dataType & front();
  void push_back(const dataType & rhs);
  void push_front(const dataType & rhs);
  void pop_back();
  void pop_front();
};
#include "dlist.cpp"

#endif
