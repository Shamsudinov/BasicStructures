#include "vector.h"

Vector::Vector(){

    memory_capacity = 100;
    curr_pos = 0;
    data = new int[memory_capacity];
}

Vector::Vector(int size){

    this->memory_capacity = size;
    curr_pos = 0;
    data = new int[this->memory_capacity];
}

Vector::~Vector(){

    delete [] data;
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


}

int Vector::size() const{

    return curr_size;
}

int Vector::capacity() const{

    return memory_capacity;
}

void Vector::print() const{

    for(int i=0; i<curr_size; i++){
        std::cout << data[i] << " ";
    }
    std::cout<<std::endl;
}
