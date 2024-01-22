#ifndef NODE_H
#define NODE_H

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
}

template<typename T>
Node<T>::Node(const T val){

    value = val;
    next = nullptr;
    prev = nullptr;
}

template<typename T>
Node<T>::~Node(){

}


#endif // NODE_H
