#ifndef NODE_H
#define NODE_H

#include <iostream>

template<typename T>
class Node{
public:
    Node<T> *next;
    Node<T> *prev;
    T value;

    Node();
    Node(const T);
    ~Node();
};

template<typename T>
Node<T>::Node(){

    value;
    next = nullptr;
    prev = nullptr;
    std::cout << "Node()" << std::endl;
}

template<typename T>
Node<T>::Node(const T val){

    value = val;
    next = nullptr;
    prev = nullptr;
    std::cout << "Node(const T)" << std::endl;
}

template<typename T>
Node<T>::~Node(){
    std::cout << "~Node()" << std::endl;
}


#endif // NODE_H
