#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

typedef unsigned int vtype;

template<class T>
class Vector
{
    vtype memory_capacity;
    T *data = nullptr;
    vtype curr_pos;
    vtype curr_size;
public:
    Vector();
    Vector(vtype size);
    ~Vector();

    void init(T val);

    void push_back(T val);
    void pop_back();

    bool empty();
    vtype size() const;
    vtype capacity() const;

    void print() const;
};

template<class T>
Vector<T>::Vector(){

    memory_capacity = 10;
    curr_pos = 0;
    data = new T[memory_capacity];
    init(0);
    std::cout << "Vector()" << std::endl;
}

template<class T>
Vector<T>::Vector(vtype size){

    this->memory_capacity = size;
    curr_pos = 0;
    data = new T[this->memory_capacity];
    init(0);
    std::cout << "Vector(int size)" << std::endl;
}

template<class T>
Vector<T>::~Vector(){

    delete [] data;
    std::cout << "~Vector()" << std::endl;
}

template<class T>
void Vector<T>::init(T val){

    for(unsigned int index = 0; index < memory_capacity; index++){
        data[index] = val;
    }
}

template<class T>
void Vector<T>::push_back(T val){

    if(curr_size == memory_capacity){
        // realloc
        return;
    }

    data[curr_pos] = val;
    curr_pos++;
    curr_size = curr_pos;
}

template<class T>
void Vector<T>::pop_back(){

    if(empty()){
        return;
    }

    data[curr_pos] = 0;
    curr_pos--;
    curr_size = curr_pos;
}

template<class T>
bool Vector<T>::empty(){

    return (curr_size == 0) ? true : false;
}

template<class T>
vtype Vector<T>::size() const{

    return curr_size;
}

template<class T>
vtype Vector<T>::capacity() const{

    return memory_capacity;
}

template<class T>
void Vector<T>::print() const{

    for(unsigned int index=0; index<curr_size; index++){
        std::cout << data[index] << " ";
    }
    std::cout<<std::endl;
}

#endif // VECTOR_H
