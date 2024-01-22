#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <node.h>

typedef unsigned int type_size;

template<typename T>
class List{

    Node<T> *head;
    Node<T> *tail;
    type_size list_size;
public:

    List();
    List(type_size,T);
    ~List();

    void push_back(const T&);
    void push_front(const T&);

    type_size size() const;

    void print() const;
};





template<typename T>
List<T>::List(){
    head = nullptr;
    tail = nullptr;
    list_size = 0;
    std::cout << "List()" << std::endl;
}

template<typename T>
List<T>::List(type_size size,T value){
    std::cout << "List(type_size,T)" << std::endl;
}

template<typename T>
List<T>::~List(){
    std::cout << "~List()" << std::endl;
}

template<typename T>
type_size List<T>::size() const{
    return list_size;
}

template<typename T>
void List<T>::push_back(const T& value){

    if(head == nullptr){
        head = new Node<T>(value);
        tail = head;
        list_size++;
        return;
    }

    Node<T> *new_node = new Node<T>(value);

    if(list_size == 1){
        tail = new_node;
        tail->prev = head;
        head->next = tail;
        list_size++;
        return;
    }

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
    list_size++;

}

template<typename T>
void List<T>::push_front(const T& value){

    if(head == nullptr){
        head = new Node<T>(value);
        tail = head;
        list_size++;
        return;
    }

    Node<T> *new_node = new Node<T>(value);
    new_node->next = head;
    head = new_node;
    list_size++;

}

template<typename T>
void List<T>::print() const{

    Node<T> *current = head;

    for(unsigned int index = 0; index < list_size; index ++){

        std::cout << current->value << " ";
        current = current->next;
    }
//    std::cout << std::endl;
//    std::cout << "head: " << head->value << std::endl;
//    std::cout << "head->next: " << head->next->value << std::endl;
//    std::cout << "tail: " << tail->value << std::endl;
//    std::cout << std::endl;
}

#endif // LIST_H
