/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CircleList.hpp
 * Author: Sala 6
 *
 * Created on 17 de septiembre de 2018, 10:18 AM
 */

#ifndef CIRCLELIST_HPP
#define CIRCLELIST_HPP
#include <vector>
#include <string>
#include "NodeDouble.hpp"
template <class T>







class CircleList {
public:
    CircleList();
    bool isEmpty();
    NodeDouble<T>* findNode(std::string);
    NodeDouble<T>* getNode(int );
    std::vector<T> getList();
    T* findObject(std::string);
    void addNode(T);
    void addFirst(T);
    void addLast(T);
    void addBeforeTo(NodeDouble<T>*,T);
    void addAfterTo(NodeDouble<T>*,T);
    void addSort(T);
    std::vector<T> printList(bool);
    T* getObject(int);
    T getFirst();
    T getLast();
    T deleteNode(NodeDouble<T>*);
    virtual ~CircleList();
private:

NodeDouble<T>* head;



#endif /* CIRCLELIST_HPP */

