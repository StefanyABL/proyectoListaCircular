/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CircleList.cpp
 * Author: Sala 6
 * 
 * Created on 17 de septiembre de 2018, 10:18 AM
 */
#include "CircleList.hpp"



template<class T> class CircleList;

template<class T>
CircleList<T>::CircleList() {
    head =NULL;    
}

template<class T>
bool CircleList<T>::isEmpty() {

}

template<class T>
void CircleList<T>::addFirst(T info) {
    if (isEmpty()){
        head= new NodeDouble<T>(info);
        head->next = head;
    }else{
        NodeDouble<T>* node = new NodeDouble<T>(info);
        node->next = head->next;
        head->next = node;
      
    }

}

template<class T>
void CircleList<T>::addLast(T info) {
      if (isEmpty()){
        head= new NodeDouble<T>(info);
        head->next = head;
    }else{
        NodeDouble<T>* node = new NodeDouble<T>(info);
        node->next = head->next;
        head->next = node;
        head= node;
    }
    

}

template<class T>
NodeDouble<T>* CircleList<T>::findNode(std::string id) {
    Nod

}

template<class T>
T* CircleList<T>::findObject(std::string) {

}

template<class T>
void CircleList<T>::addBeforeTo(NodeDouble<T>*, T) {

}

template<class T>
void CircleList<T>::addAfterTo(NodeDouble<T>*, T) {

}

template<class T>
void CircleList<T>::addSort(T) {

}

template<class T>
NodeDouble<T>* CircleList<T>::getNode(int) {

}

template<class T>
std::vector<T> CircleList<T>::getList() {
    std::vector<T> output;
    NodeDouble<T>* aux = head;
    do {
        output.push_back(aux->next->info);
        aux=aux->next;
    }while(aux!=head);
    return output;

}

template<class T>
T CircleList<T>::deleteNode(NodeDouble<T>*) {

}
 









template<class T>
CircleList<T>::~CircleList<T>() {
}
