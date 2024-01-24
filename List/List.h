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
    const type_size MAX_SIZE = 1000;
public:

    List();
    List(type_size,T);
    ~List();

    void push_back(const T&);
    void push_front(const T&);
    void pop_back();
    void pop_front();

    bool remove(const T&);
    void remove_all(const T&);

    bool empty();
    type_size size() const;
    type_size max_size() const;
    void clear();
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

    for(unsigned int index = 0; index < size; index++){
        push_back(value);
    }
    std::cout << "List(type_size,T)" << std::endl;
}

template<typename T>
List<T>::~List(){

    clear();
    std::cout << "~List()" << std::endl;
}

template<typename T>
type_size List<T>::size() const{
    return list_size;
}

template<typename T>
type_size List<T>::max_size() const{
    return MAX_SIZE;
}

template<typename T>
void List<T>::push_back(const T& value){

    if(list_size == MAX_SIZE){
        return;
    }

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

    if(list_size == MAX_SIZE){
        return;
    }

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
void List<T>::pop_back(){

    if(empty()){
        return;
    }

    if(list_size == 1){
        delete head;
        head = tail = nullptr;
        list_size = 0;
        return;
    }

    Node<T> *del = tail;
    tail = tail->prev;
    delete del;
    list_size--;
}

template<typename T>
void List<T>::pop_front(){

    if(empty()){
        return;
    }

    if(list_size == 1){
        delete head;
        head = tail = nullptr;
        list_size = 0;
        return;
    }

    Node<T> *del = head;
    head = head->next;
    delete del;
    list_size--;
}

template<typename T>
bool List<T>::remove(const T &val){

    Node<T> *del = head;
    bool find = false;
    while(del != nullptr){

       if(del->value == val){
           find = true;
           break;
       }
       del = del->next;
    }

    if(del == nullptr && find == false)
        return find;

    Node<T> * prevDel = del->prev;
    Node<T> * afterDel = del->next;

    if(prevDel != nullptr && list_size != 1)
       prevDel->next = afterDel;

     if(afterDel != nullptr && list_size != 1)
       afterDel->prev = prevDel;

    if(del == head)
        head = afterDel;
    if(del == tail)
        tail = prevDel;

    delete del;
    list_size --;

    return find;
}

template<typename T>
void List<T>::remove_all(const T &val){

    bool status = false;
    do{
        status = remove(val);
    } while (status);
}

template<typename T>
bool List<T>::empty(){

    if(head == nullptr && tail == nullptr && list_size == 0)
        return true;
    return false;
}

template<typename T>
void List<T>::clear(){

    Node<T> *curr_del;
    curr_del = head;
    while (list_size != 0) {
        head = head->next;
        delete curr_del;
        curr_del = head;
        list_size--;
    }
}

template<typename T>
void List<T>::print() const{

    Node<T> *current = head;

    for(unsigned int index = 0; index < list_size; index ++){

        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << std::endl;
//    std::cout << "head: " << head->value << std::endl;
//    std::cout << "head->next: " << head->next->value << std::endl;
//    std::cout << "tail: " << tail->value << std::endl;
//    std::cout << std::endl;
}

#endif // LIST_H
