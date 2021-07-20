/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodeDouble.hpp
 * Author: Sala 6
 *
 * Created on 17 de septiembre de 2018, 10:26 AM
 */

#ifndef NODEDOUBLE_HPP
#define NODEDOUBLE_HPP
#include <cstdlib>

template<class T>class CircleList;
template <class  T> class NodeDouble {
public:
    friend class CircleList<T>;
    NodeDouble();
    NodeDouble(T);
    T getInfo();  
    virtual ~NodeDouble();
private:

    T info;
    NodeDouble<T>* next;
   NodeDouble< T>* provious;
};
template <class T>
NodeDouble<T>::NodeDouble(){
    next=NULL;
    provious=NULL;
}
template <class T>
NodeDouble<T>::NodeDouble(T info){
    this->info = info;
    next=NULL;
    provious= NULL;
}
template <class T>
NodeDouble<T>::~NodeDouble(){
   
}

#endif /* NODEDOUBLE_HPP */









