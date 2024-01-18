#include "vector.h"

Vector::Vector(){

    memory_capacity = 10;
    curr_pos = 0;
    data = new int[memory_capacity];
    init(0);
    std::cout << "Vector()" << std::endl;
}

Vector::Vector(vtype size){

    this->memory_capacity = size;
    curr_pos = 0;
    data = new int[this->memory_capacity];
    init(0);
    std::cout << "Vector(int size)" << std::endl;
}

Vector::~Vector(){

    delete [] data;
    std::cout << "~Vector()" << std::endl;
}

void Vector::init(int val){

    for(unsigned int index = 0; index < memory_capacity; index++){
        data[index] = val;
    }
}

void Vector::push_back(int val){

    if(curr_size == memory_capacity){
        // realloc
        return;
    }

    data[curr_pos] = val;
    curr_pos++;
    curr_size = curr_pos;
}

void Vector::pop_back(){

    if(empty()){
        return;
    }

    data[curr_pos] = 0;
    curr_pos--;
    curr_size = curr_pos;
}

bool Vector::empty(){

    return (curr_size == 0) ? true : false;
}

vtype Vector::size() const{

    return curr_size;
}

vtype Vector::capacity() const{

    return memory_capacity;
}

void Vector::print() const{

    for(unsigned int index=0; index<curr_size; index++){
        std::cout << data[index] << " ";
    }
    std::cout<<std::endl;
}
