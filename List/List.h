#ifndef LIST_H
#define LIST_H

#include <node.h>

typedef unsigned int type_size;

template<typename T>
class List{

    Node<T> *first_node;
    Node<T> *last_node;
    type_size list_size;
public:

    List();
    List(type_size,T);

    type_size size() const;
};

template<typename T>
type_size List<T>::size() const{
    return list_size;
}

#endif // LIST_H
